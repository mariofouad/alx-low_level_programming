#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdlib.h>

/**
 * print_magic - Prints the ELF magic bytes
 * @e_ident: ELF identification array
 */
void print_magic(unsigned char e_ident[])
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_info - Prints ELF header information
 * @header: ELF header structure
 */
void print_info(Elf64_Ehdr header)
{
	printf("  Class:                             %s\n", (header.e_ident[EI_CLASS]
				== ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", (header.e_ident[EI_DATA]
				== ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", (header.e_ident[EI_OSABI]
				== ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n",
			header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", (header.e_type ==
				ET_EXEC) ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               %lx\n",
			(unsigned long)header.e_entry);
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]);
		return (98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1
			|| header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	printf("ELF Header:\n");
	print_magic(header.e_ident);
	print_info(header);

	close(fd);
	return (0);
}

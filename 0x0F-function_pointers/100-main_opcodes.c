#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 1 for incorrect number of arguments,
 *         2 for negative number of bytes.
 */
int main(int argc, char *argv[])
{
    int bytes, i;
    unsigned char *main_ptr;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    main_ptr = (unsigned char *)main;

    for (i = 0; i < bytes - 1; i++)
        printf("%02x ", main_ptr[i]);

    printf("%02x\n", main_ptr[i]);

    return 0;
}


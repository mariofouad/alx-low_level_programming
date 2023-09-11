#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

if (new_dog->name == NULL || new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}

strcpy(new_dog->name, name);
new_dog->age = age;
strcpy(new_dog->owner, owner);
return (new_dog);
}

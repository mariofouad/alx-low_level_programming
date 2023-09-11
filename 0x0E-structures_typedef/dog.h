#ifndef DOG_H
#define DOG_H
/**
 * struct dog - st
 * @name: j
 * @age: j
 * @owner: j
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

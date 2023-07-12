#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 *struct dog - dog info
 *@name: name of dog
 *@age: age of dog
 *@owner: who owns dog
 *Return: success always
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

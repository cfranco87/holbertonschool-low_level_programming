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

#endif

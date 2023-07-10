#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - dog dog dog
 *@name: name of dog
 *@age: age of dog
 *@owner: who owns dog
 *@d: davis the dog
 *Return: success always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 *init_dog -initializes a variable of type struct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: who owns dog
 *@d: the dog to be initialized
 *Return: success always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}


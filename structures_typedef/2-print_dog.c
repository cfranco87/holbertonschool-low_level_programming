#include "dog.h"
#include <stdlib.h>

/**
 *print_dog -initializes a variable of type struct dog
 *@d: the dog to be initialized
 *Return: success always
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
		return;
	}

	if (d->name == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("%s", d->name);
	}
	if (d->age == 0)
	{
		printf("nil");
	}
	else
	{
		printf("%.2f", d->age);
	}

	if (d->owner == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("%s", d->owner);
	}
}

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
	}

	if (d->name == NULL)
	{
		printf("nil");
	}
	if (d->name == NULL)
	{
		printf("nil");
	}
	if (d->owner == NULL)
	{
		printf("nil");
	}
}

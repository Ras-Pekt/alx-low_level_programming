#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: struct d
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);
		if (d->age <= 0)
			printf("Age: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->name == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
}

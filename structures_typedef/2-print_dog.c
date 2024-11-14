#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Funtion to print the value of struct dog
 *
 * @d: Pointer to struct to access the value
 */

void print_dog(struct dog *d)/* Receive a pointer to a dog struct */
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

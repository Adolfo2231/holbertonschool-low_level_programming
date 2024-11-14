#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - Defines a dog's attributes
 *
 * @d: struct previously created
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A structure for storing infomation about a dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

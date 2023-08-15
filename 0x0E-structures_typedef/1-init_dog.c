#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - A Cunction initializes a variable to the type struct dog
  @d: A pointer to struct dog to initialize
  @name: name to initialize
  @owner: ower to initialize
  */

void init_dog(struct dog *d, char *name, float age, char*owner)
{
	/* Checking if parameter d is empty of not */
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name =name;
	d->age = age;
	d->owner = owner;
}

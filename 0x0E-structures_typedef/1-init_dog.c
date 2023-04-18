#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes struct dog variable.
 * @d: pointer to struct
 * @name: dog name parameter
 * @age: dog age parameter
 * @owner: pointer parameter to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}

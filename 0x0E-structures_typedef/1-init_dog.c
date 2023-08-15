#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize struct dog
 *@d:struct
 *@name:name char
 *@age: age float
 *@owner: owner of type char
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}


}

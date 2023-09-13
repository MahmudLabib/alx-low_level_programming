#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: Pointer to struct
 * @name: Pointer to string
 * @age: float number
 * @owner: Pointer to string
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

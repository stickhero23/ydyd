#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function to initialize the variable
 * of type struct dog.
 * @d: char type pointer.
 * @name: char type pointer.
 * @age: int type element of struct dog.
 * @owner: char type pointer
 * Return: Always 0, success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* struct dog *d; */

	/* d = malloc(sizeof(struct dog)); */
	if (d == NULL)
        return;
	d->name = name;
	d->age = age;
	d->owner = owner;
	/*return d;*/
}

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - copies struct dog.
 * @name: first element of dog_t struct
 * @age: second element
 * @owner: third element of struct
 * Return: returns NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *this_dog;
	int i, j, k;
	char *m, *n;

	this_dog = malloc(sizeof(dog_t));
	if (this_dog == NULL)
		return (NULL);
    
	for (i = 0; name[i] != '\0'; i++)
            ;
    for (i = 0; owner[i] != '\0'; i++)
            ;
	m = malloc(sizeof(char) * i + 1);
	if (m == NULL)
	{
		free(this_dog);
		return (NULL);
	}
	n = malloc(sizeof(char) * j + 1);
	if (n == NULL)
	{
		free(n);
		free(this_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		m[k] = name[k];
	for (k = 0; k <= j; k++)
		n[k] = owner[k];


	this_dog->name = m;
	this_dog->age = age;
	this_dog->owner = n;

	return (this_dog);
}
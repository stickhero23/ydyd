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
	char *copy_name;
	char *copy_owner;

	this_dog = malloc(sizeof(dog_t));
	if (this_dog == NULL)
		return (NULL);
	this_dog->age = age;

	if (name != NULL)
	{
		copy_name = malloc(_strlen(name) + 1);
		if (copy_name == NULL)
		{
			free(this_dog);
			return (NULL);
		}
		this_dog->name = _strcpy(copy_name, name);
	}
	else
		this_dog->name = NULL;
	if (owner != NULL)
	{
		copy_owner = malloc(_strlen(owner) + 1);
		if (copy_owner == NULL)
		{
			free(copy_name);
			free(this_dog);
			return (NULL);
		}
		this_dog->owner = _strcpy(copy_owner, owner);
	}
	else
		this_dog->owner = NULL;

	return (this_dog);
}
/**
 * _strcpy - copying string src to dest
 * @dest: string
 * @src: string source
 * Return: returns combined string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}
/**
 * _strlen - finds length of string
 * @str: pointer type char
 * Return: returns length of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}
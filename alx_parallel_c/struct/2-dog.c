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
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;
    if (d->name == NULL)
    {
        printf("Name: (nil)\n");
    }
    printf("Name: %s\n", d->name);
    printf("Age: %f\n", d->age);
    
    if (d->owner == NULL)
    {
        printf("Owner: (nil)\n");
    }
    printf("Owner: %s\n", d->owner);
    
    
    
    
}
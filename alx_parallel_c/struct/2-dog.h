#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure dog,
 * @name: member 1, stores name of dog.
 * @age: member 2, age of dog.
 * @owner: member 3, owner of the dog.
 *
 * Description: the dog struct is for the elements of two
 * data types.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
 * The above is the same as this one
 * typedef struct dog dog_t;
 * 
 */
#endif

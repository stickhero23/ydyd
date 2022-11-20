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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
#endif
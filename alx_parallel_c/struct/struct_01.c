#include <stdlib.h>
#include <stdio.h>


/** Declaration
 * Initialization
 * Assignment
*/
struct struct_01
{
    char *name;
    double salary;
    int age;
    double height;
    double weight;

};
int main()
{
    struct struct_01 details; /* Defining and initializing the struct struct_01*/
    details.name = "John Doe";
    details.salary = 8673.50;
    details.age = 45;
    details.weight = 86;
    return (0);
}
int p;
/* Define a variable p of type point, and initialize its first two members in place */
struct point p = { 1, 2 };
/* Define a variable p of type point, and set members using designated initializers */
struct point p = { .y = 2, .x = 1 };
/* Define a variable q of type point, and set members to the same values as those of p */
/*int p;
struct point q = p; */

/* Assignment of Struct*/

/*A struct may be assigned to another struct. A compiler might use memcpy() to perform such an assignment.*/
struct point {
    int x;
    int y;
};

int main(void)
{
    struct point p = { 1, 3 };        /* initialized variable */
    struct point q;                   /* uninitialized */
    q = p;                     /* copy member values from p into q */
    return 0;
}

/* Pointers can be used to refer to a struct by its address. This is useful for passing structs to a function. The pointer can be dereferenced using the * operator. The -> operator dereferences the pointer to struct (left operand) and then accesses the value of a member of the struct (right operand). */
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;  /* p is a pointer to my_point */
/**(*p).x = 8;                   /* set the first member of the struct */
/** p->x = 8; 
* my_point.y -> 98;  /* equivalent method to set the first member of the struct */
                  /* equivalent method to set the first member of the struct */


struct vehicles
{
    char *porche;
    char *bmw;
    double saleprice;
    int *yearomanufacture;

} models;

int main(void)
{
    struct vehicles models1;
    return (0);
}


/* Declaring struct with State and city*/
struct pAddress
{
    int age;
    int weight;
};

/* Defining a variable location of type pAddress and initialize with its first two members.*/
/*struct pAdrress p = {24, 78}; */
struct pAddress p = {.age = 24, .weight = 78};
struct pAddress *q = &p;
/* (*p).age = 28; /* setting new age to age member of struct*/
/* q->age = 28; /* Equivalent */
/*p.age = 28; */ /* Equivalent for setting age*/

/**
 * struct dog - dog structure
 * @name:
 * @age:
 * @owner:
 * 
 * Description:
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Illustrating creating structures
 * Note the memory allocation using malloc.
 */

struct User
{
    char *name;
    char *email;
    int age;
};
struct User *new_user(char *name, char *email, int age)
{
    struct User *user;

    user = malloc(sizeof(struct User));    

    return user;
}
int main(void)
{
    struct User *user;
    user = new_user("Food","foo@foo.bar",98);
    if (user == NULL)
    {
        return (1);
    }
    printf("User %s created !\n", user->name);
    printf("His emails is: %s\n", user->email);
    printf("And he is %d years old\n", user->age);
    return (0);

}


#include "lists.h"

size_t print_list(const list_t *p);

size_t print_list(const list_t *p)
{
    const listint_t *t;
    size_t q;

    q = 0;

    t = p;


    while (t != 0)
    {
        t = t->next;
        q++;
    }
    
    return (q);


}
int main()
{
    
}
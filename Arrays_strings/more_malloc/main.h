#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
int _strlen(char *string);
char *str_concat(char *s1, char *s2);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/* int main(int argc, char *argv[]); */
void _puts(char *str);
int _isdigit(int c);
int count_digits(int q);
int _putchar(char c);

#endif

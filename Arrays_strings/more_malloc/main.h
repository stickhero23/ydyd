#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
int _strlen(char *string);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int multiplier(int argc, char *argv[]);
void _puts(char *str);
#endif

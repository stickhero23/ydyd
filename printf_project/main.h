#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct typeConvert - struct type for symbols and functions
 * @op: the operator
 * @func: associated function
 */
typedef struct typeConvert
{ /* creating a struct type called opt */
	char *op;
	int (*func)(va_list);
} opt;
/* functions for _printf */
int parse_string(const char *format, opt type_list[], va_list valist);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int prnt_char(char);
#endif

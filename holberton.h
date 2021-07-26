#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int converter(char modifier, va_list list);
int print_char(va_list);
int print_str(va_list list);
int print_num(va_list list);
/**
 * struct converter - struct especifies conversion.
 * @mod: the specifier variable.
 * @f: pointer to a function that
 * accepts a list of variables.
 */
typedef struct converter
{
	char mod;
	/*va_list contains un list de variables*/
	int (*f)(va_list list);
} convert;
#endif /* _HOLBERTON_H_ */

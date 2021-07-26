#include "holberton.h"
/**
 * converter - calls functions connected with modifiers.
 * @modifier: modifier '%'.
 * @list: list of variable arguements.
 * Return: the number of chars counted.
 */
int converter(char modifier, va_list list)
{
	int count = 0, idx;
	/* array that holds the characters and functions*/
	convert fp[] = {
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
	};

	/* parsing through fp[]*/
	for (idx = 0; fp[idx].mod != '\0'; idx++)
	{
		if (fp[idx].mod == modifier)
		{
			/* calling the function to their respective char */
			count += fp[idx].f(list);
			return (count);
		}
	}
	count += _putchar('%');
	count += _putchar(modifier);
	return (count);
}

#include "holberton.h"

/**
 * mod_check - checks for modifiers
 * @modifier: the modifier being used
 * @list: reference to the last parameter.
 * Return: number of characters used.
*/
int mod_check(char modifier, va_list list)
{
	int index;
	char *str;
	char letter;

	switch (modifier)
	{
		/* checks for string(s) and character(c) modifiers */
		case 's':
			str = va_arg(list, char *);
			/* prints out every element of the string*/
		for (index = 0; str[index] != '\0'; index++)
		{
			putchar(str[index]);
			return (index);
		}

		case 'c':
			letter = va_arg(list, int);
			/* prints out the character and returns 1*/
			putchar(letter);
			return (1);
	}
	va_end(list);
	return (0);
}

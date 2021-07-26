#include "holberton.h"
/**
 * print_char - function prints a character, accordint to the list.
 * @list: list of the arguerments.
 * Return: 1, to count for the character printed.
 */
int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
/**
 * print_str - prints every element of a string.
 * @list: list of arguements.
 * Return: total number of characters printed.
 */
int print_str(va_list list)
{
	char *str;
	int idx;

	str = va_arg(list, char *);

	if(str == NULL)
		str = "(null)";
	for (idx = 0; str[idx] != '\0'; idx++)
	{
		_putchar(str[idx]);
	}
	return (idx - 1);
}

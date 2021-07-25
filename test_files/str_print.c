#include "holberton.h"

/**
 * prtstr - function that prints a string
 * @s: string to print
 * Return: the amount of characters
 */

int prtstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i - 1);
}

/**
 * prtchar - function that prints a character
 * @c: character to print
 * Return: character
 */

int prtchar(char c)
{
	_putchar(c);
	return (1);
}

/**
 *  _putchar - writes a character C to stdout.
 *  @c: the character to print out.
 *
 *  Return: on success 1.
 *  On error: -1 is the returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

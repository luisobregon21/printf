#include "holberton.h"

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

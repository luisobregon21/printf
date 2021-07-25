#include "holberton.h"

/**
 * _printf - function prints what its passed to it
 * currently working for strings and characters.
 * have not checked edge cases.
 * @format: constatnt string
 * Return: the number of characters used.
 */
int _printf(const char *format, ...)
{
	/* track variable will keep track of the characters used */
	int idx, track = 0;
	va_list list;

	va_start(list, format);

	for (idx = 0; format[idx] != '\0'; idx++)
	{
		/* checks for format modifier */
		if (format[idx] == '%')
		{
			/**
			 * this code calls the function mod_check
			 * that checks for the letter that follows
			 * the modifier (%)
			 **/
			track += mod_check(format[idx + 1], list);
			idx++;
		}
		else
		{
			track += putchar(format[idx]);
		}
	}
	va_end(list);
	return (track);
}


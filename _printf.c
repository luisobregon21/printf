#include "holberton.h"
/**
 * _printf - function prints what its passed to it.
 * @format: character string that holds '%','c' and 's'.
 * currently working for strings and characters.
 * have not checked edge cases.
 * Return: number of total characters used.
 */
int _printf(const char *format, ...)
{
	/* track variable will keep track of the characters used */
	int idx, track = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	if (list == NULL)
		return (-1);

	for (idx = 0; format[idx] != '\0'; idx++)
	{
		/* checks for format modifier */
		if (format[idx] == '%')
		{
			if (format[idx + 1] == '%')
			{
				track += _putchar(format[idx]);
			}
			else
			/**
			 * this code calls the function converter
			 * that checks for the letter that follows
			 * the modifier (%) and it will use the function
			 * pointing to that letter.
			 **/
			{
				track += converter(format[idx + 1], list);
				idx++;
			}
		}
		else
		{
			track += _putchar(format[idx]);
		}

	}
	va_end(list);
	return (track);
}

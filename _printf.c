#include "holberton.h"
/**
 * _printf - function prints what its passed to it.
 * @format: constant string that is passed to printf.
 * format is what is inside the "quotes".
 * it can also hold the especifiers like: '%','c' and 's'.
 * currently working for strings and characters.
 * have not checked edge cases.
 * Return: number of total characters used.
 */
int _printf(const char *format, ...)
{
	int idx, count = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	if (list == NULL)
		return (-1);

	/* parsing through the string format to print whats inside of it*/
	for (idx = 0; format[idx] != '\0'; idx++)
	{
	/* checks for format modifier and if there is something after it*/
		if (format[idx] == '%' && format[idx + 1] != '\0')
		{
			/*si lo que sigue es un %, print and sigue contando*/
			if (format[idx + 1] == '%')
			{
				count += _putchar(format[idx++]);
			}
			else
		/* calls function converter which calls the respective functiom */
			{
			/* ++idx is equivalent to format[idx + 1] and index++ */
				count += converter(format[++idx], list);
			}
		}
		else
		{
			/* if the index after the % is nothing, return -1(error) */
			if (format[idx] == '%' && format[idx + 1] == '\0')
				return (-1);
			count += _putchar(format[idx]);
		}
	}
	va_end(list);
	return (count);
}

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

	if (str == NULL)
		str = "(null)";
	for (idx = 0; str[idx] != '\0'; idx++)
	{
		_putchar(str[idx]);
	}
	return (idx);
}
/**
 * print_num - prints interger/decimal passed.
 * @list: list of arguements passed.
 * Return: number of characters written.
 */
int print_num(va_list list)
{
	int num = 0, idx = 0;
	int count = 0;
	int arr[13];
	unsigned int new;

	num = va_arg(list, int);

	if (num < 0)
	{
		count += _putchar('-');
		new = num * (-1);
	}
	else
		new = num;

	if (new == 0)
	{
		count += _putchar(new + '0');
		return (count);
	}

	while (new != 0)
	{
		arr[idx] = new % 10;
		new = new / 10;
		idx++;
	}

	for (idx = idx - 1; idx >= 0; idx--)
	{
		count += _putchar(arr[idx] + '0');
	}
	return (count);
}
/**
 * print_binary - function converts unsigned int to binary.
 * @list: unsigned int arguement to convert to binary.
 * Return: number of characters used.
 */
int print_binary(va_list list)
{
	unsigned int a[10];
	unsigned int b;
	int idx = 0;
	int count = 0;

	b = va_arg(list, unsigned int);

	for (idx = 0; b > 0; idx++)
	{
		a[idx] = b % 2;
		b = b / 2;
	}
	for (idx = idx - 1; idx >= 0; idx--)
	{
		count += _putchar(a[idx] + '0');
	}
	return (count);
}

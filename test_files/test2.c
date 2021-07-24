#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int mod_check(char modifier, va_list list);

/**
 * main - prints out what is passed to function _printf.
 *
 * Return: at the moment, just 0.
 */
int main(void)
{
	/**
	 * "double quotes is for string"
	 * 'single quotes is for characters'
	 * */
	_printf("this is a string:%s\nand a character: %c\n", "s", 98);
	_printf("Hi my name is %s, call me %c, as in Hero\n", "Manny Vela", 'H');

	return (0);
}
/**
 * _printf - function prints what its passed to it.
 * currently working for strings and characters.
 * have not checked edge cases.
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
			/* *
			 * this code calls the function mod_check
			 * that checks for the letter that follows
			 * the modifier (%)
			 * */
			mod_check(format[idx +1], list);
			track++;
			idx++;
		}
		else
		{
			putchar(format[idx]);
			track++;
		}
	}
	va_end(list);
	return (track);
}

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

	switch(modifier)
	{
		/* checks for string(s) and character(c) modifiers */
		case 's':
			str = va_arg(list, char *);
			/* prints out every element of the string*/
		for (index = 0; str[index] != '\0'; index++)
			putchar(str[index]);
		return (index);
		break;

		case 'c':
			letter = va_arg(list, int);
			/* prints out the character and returns 1*/
			putchar(letter);
			return (1);
			break;
	}
	va_end(list);
	return(0);
}

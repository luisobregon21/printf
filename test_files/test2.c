#include <stdio.h>
#include <stdarg.h>
void _printf(const char *format, ...);
int mod_check(char modifier, va_list list);

/**
 * main - function to prints 
 *
 */
int main(void)
{
/*

*/
	_printf("Hi my name is %s, call me %c, as in Hero\n", "Manny Vela", 'H');
}
/**
 * 
 */
void _printf(const char *format, ...)
{
	/**
	 * Output should look like just like what the printf output would look.
	 * Do not use malloc or function pointers. Use putchar
	 */

	int idx;
	va_list list;

	va_start(list, format);

	for (idx = 0; format[idx] != '\0'; idx++)
	{
		/**
		 */
		if (format[idx] == '%')
		{
			/* */
			mod_check(format[idx +1], list);
			idx++;
		}
		else
		{
			putchar(format[idx]);
		}
	}
	va_end(list);
}

int mod_check(char modifier, va_list list)
{
	int index;
	char *str;
	char letter;

	switch(modifier)
	{
		case 's':
			str = va_arg(list, char *);
		for (index = 0; str[index] != '\0'; index++)
			putchar(str[index]);
		return (index);
		break;

		case 'c':
			letter = va_arg(list, int);
			putchar(letter);
			return (1);
			break;
	}
	va_end(list);
	return(0);
}

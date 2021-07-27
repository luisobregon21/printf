#include "holberton.h"
int main(void)
{
	int len;
	int len2;
	//char *puto = "esto es un string\n";
	char *p = NULL;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	//edge cases start here

	_printf("%%\n");
	printf("%%\n");

	//printf(puto);
	//_printf(puto);
	//our _printf doesn't print the second escape character

	//printf("%\n");
	//_printf("%\n");
	//our _printf doesn't print % and newline
	//printf("%$\n");
	//_printf("%$\n");

	//printf("%(ayy)\n");
	//_printf("%(ayy)\n");

	printf("%s", p);
	putchar('\n');
	_printf("%s", p);
	putchar('\n');
	//this one crashed



	//edge cases ends here
	printf("len of our printf: %i len of the real printf: %i\n", len, len2);

	return (0);
}

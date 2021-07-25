#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - testing out printf to verify edge cases
 *
 * Return: Always 0
 */
int main(void)
{
	int l1 = 0, l2 = 0;
	char *ptr = NULL;

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("1 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	l1 = printf("%s", ptr);
	putchar('\n');
	l2 = _printf("%s", ptr);
	putchar('\n');
	printf("2 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("3 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("4 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("5 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("6 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("7 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("8 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("9 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	l1 = printf("This is a test\n");
	l2 = _printf("This is a test\n");
	printf("10 printf: %d _printf: %d \n", l1, l2);
	putchar("\n");

	return (0);
}

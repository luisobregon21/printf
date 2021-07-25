#include <stdio.h>
#include <stdlib.h>

void _printf(char *sentence,  char *name, int num);

/**
 * main - Output should look like just like
 * what the printf output would look like.
 * Do not use malloc or func pointers.
 * make variadic functions.
 * Return: only waht %s and %i point to
 * in this test file.
 */
int main(void)
{
	/* what we want to print, calling our version of printf */
	_printf("Hi my name is %s and I am %i years old", "Benito Lorcamelo", 651);
}
/**
 * _printf - will print what we passed to format modifiers
 * @sentence: the sentence where the modifiers will be
 * @name: name we want to print.
 * @num: integer to be printed.
 */
void _printf(char *sentence, char *name, int num)
{
	/**
	 * indexes will parse to one string
	 * index 1 will move through sentence
	 * index 2 will parse through the name
	*/
	int idx, idx2;

	for (idx = 0; sentence[idx] != '\0'; idx++)
	{
		/**
		 * when we find the format modifiers (%),
		 * and the next char is s, print a string
		 */
		if (sentence[idx] == '%' && sentence[idx + 1] != '\0'
			&& (sentence[idx + 1] == 's'))
		{
			/* printing out the name */
			for (idx2 = 0; name[idx2] != '\0'; idx2++)
			putchar(name[idx2]);
		}

		if (sentence[idx] == '%' && sentence[idx + 1] != '\0'
			&& sentence[idx + 1] == 'i')
		{
			printf("%d", num);
		}
	}
	putchar('\n');
}

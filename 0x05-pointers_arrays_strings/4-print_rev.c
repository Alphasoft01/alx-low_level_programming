#include <stdio.h>

/**
 * print_rev - a function that prints a string
 * in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/*To calculate the length of the string*/
	while (s[length] != '\0')
	{
		length++;
	}

	/*To Print the string in reverse order*/
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}

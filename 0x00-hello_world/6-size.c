#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the size of various types
 * on the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int d;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(long));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(float));

return (0);
}

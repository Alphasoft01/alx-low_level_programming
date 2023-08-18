#include "main.h"

/**
 * print_time - Prints the given time in "hh:mm" format.
 * @hour: The hour value.
 * @minute: The minute value.
 */
void print_time(int hour, int minute)
{
	_putchar((hour / 10) + '0');
	_putchar((hour % 10) + '0');
	_putchar(':');
	_putchar((minute / 10) + '0');
	_putchar((minute % 10) + '0');
	_putchar('\n');
}

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			print_time(hour, minute);
		}
	}
}

#include "main.h"

/**
 *  jack_bauer - prints every minute of the day of Jack Bauer,
 *               starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
		for (minutes = 0; minutes < 60; minutes++)
		{
			int a = hours / 10;
			int b = hours % 10;
			int c = minutes / 10;
			int d = minutes % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
}

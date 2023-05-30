#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - 24 hours
 *
 * Reurn: time
 */

void jack_bauer(void)
{

	int hours = 0;
	int time = 0;

	int hours_r = 0;
	int time_r = 0;

	while (hours <= 23)
	{
		while (time <= 59)
		{
			hours_r = hours % 10;
			time_r = time % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_r + '0');
			_putchar(':');
			_putchar(time / 10 + '0');
			_putchar(time_r + 0);
			time++;
			_putchar('\n');
		}
	}
	hours++;


}

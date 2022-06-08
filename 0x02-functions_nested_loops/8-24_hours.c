#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 * Description: prints every minute of the day starting from 00:00 to 23:59.
 * _putchar - prints out message
*/

void jack_bauer(void)
{
	int h = 0;
	int m = 0, q = 0, w = 0, e = 0;

	while (h < 1440)
	{
		_putchar(m + '0');
		_putchar(q + '0');
		_putchar(':');
		_putchar(w + '0');
		_putchar(e + '0');
		_putchar('\n');

		e++;
		if (e > 9)
		{
			e = 0;
			w++;
		}
		if (w > 5)
		{
			w = 0;
			q++;
		}
		if (q > 9)
		{
			q = 0;
			m++;
		}
		h++;
	}
}

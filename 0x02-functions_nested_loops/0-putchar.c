#include "main.h"

/**
 *main - Entry point
 *
 * Description - prints _putchar, followed by a new line
 * Return: 0 (Sucees)
 */

int main(void)
{
	char c[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);
}

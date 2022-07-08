#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * c = char, i = int, f = float, s = char *.
 * @format: list arg types.
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int n = 0;
	int i = 0;
	char *sep = ", ";
	char *str;

	va_start(ap, format);
	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
			sep = "";
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), sep);
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(ap);
}

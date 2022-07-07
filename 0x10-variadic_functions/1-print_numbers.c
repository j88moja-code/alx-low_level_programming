#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 *
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	va_list ap;
	unsigned int i;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(ap, n);
	if (n > 0)
		printf("%d", va_arg(ap, unsigned int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(ap, unsigned int));
	printf("\n");
	va_end(ap);
}

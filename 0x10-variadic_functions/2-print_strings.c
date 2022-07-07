#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 *
 * @separator: pointer to the character that separates the strings.
 * @n: number of strings passed to the function.
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;

	va_list ap;

	if (separator == NULL || *separator == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if ( i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

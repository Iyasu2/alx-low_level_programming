#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Entry point
 * Description: 'prints numbers'
 *
 * @n: int input
 * @separator: char input
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list s;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (separator != NULL || *separator == 0)
				printf("%i%s", va_arg(s, int), separator);
			else
				printf("%i", va_arg(s, int));
		}
		else
		{
			printf("%i\n", va_arg(s, int));
		}
	}
	va_end(s);
}

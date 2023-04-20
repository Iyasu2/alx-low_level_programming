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
		printf("%i", va_arg(s, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}

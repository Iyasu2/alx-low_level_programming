#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry point
 * Description: 'prints strings'
 *
 * @n: int input
 * @separator: char input
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list s;
	char *c;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(s, char *);

		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}

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

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (separator != NULL)
			{
				if (va_arg(s, char*) != NULL)
					printf("%s%s", va_arg(s, char *), separator);
				else
					printf("(nil)%s", separator);
			}
			else
			{
				if (va_arg(s, char*) != NULL)
					printf("%s", va_arg(s, char*));
				else
					printf("(nil)");
			}
		}
		else
		{
			if (va_arg(s, char*) != NULL)
				printf("%s\n", va_arg(s, char*));
			else
				printf("(nil)\n");
		}
	}
	va_end(s);
}

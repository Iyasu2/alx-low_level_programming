#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Entry point
 * Description: 'prints all'
 *
 * @format: char input
 * Return: none
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int counter = 0;
	char *c;
	va_list s;

	va_start(s, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(s, int));
				break;
			case 'i':
				printf("%d", va_arg(s, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(s, double));
				break;
			case 's':
				c = va_arg(s, char *);
				if (c == NULL)
					c = "(nil)";
				printf("%s", c);
				break;
			default:
				counter++;
				break;
		}
		if (format[i + 1] && counter == 0)
			printf(", ");
		counter = 0;
		i++;
	}
	printf("\n");
	va_end(s);
}

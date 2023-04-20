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
				counter++;
				break;
			case 'i':
				printf("%d", va_arg(s, int));
				counter++;
				break;
			case 'f':
				printf("%f", (float)va_arg(s, double));
				counter++;
				break;
			case 's':
				c = va_arg(s, char *);
				counter++;
				if (c != NULL)
					printf("%s", c);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		if (format[i + 1] && counter == i + 1)
			printf(", ");
		else
			counter++;
		i++;
	}
	printf("\n");
	va_end(s);
}

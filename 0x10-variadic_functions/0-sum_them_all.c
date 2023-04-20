#include <stdarg.h>
/**
 * sum_them_all - Entry point
 * Description: 'sum of all parameters'
 *
 * @n: int input
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list s;

	if (n == 0)
		return (0);
	va_start(s, n);
	for (i = 0; i < n; i++)
		sum += va_arg(s, int);
	va_end(s);
	return (sum);
}

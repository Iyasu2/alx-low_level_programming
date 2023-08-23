#include "function_pointers.h"
/**
 * print_name - Entry point
 * Description: 'printing name'
 *
 * @name: char input
 * @f: function input
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

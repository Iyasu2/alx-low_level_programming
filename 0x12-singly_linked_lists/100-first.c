#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * first - Entry point
 * Description: 'print before main'
 *
 * Return: none
 */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\\n");
	printf("I bore my house upon my back!\n");
}

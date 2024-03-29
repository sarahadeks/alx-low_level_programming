#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - funtion that prints a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: no return.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
}

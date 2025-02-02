#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a provided function.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char * argument.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

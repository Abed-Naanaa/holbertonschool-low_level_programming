#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse, followed by a new line.
 * @s: The string to print.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}

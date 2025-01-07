#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')  /* Base case: if the string is empty (null character) */
{
putchar('\n');  /* Print a new line */
return;         /* Exit the function */
}

putchar(*s);              /* Print the current character */
_puts_recursion(s + 1);   /* Recursively call */
}

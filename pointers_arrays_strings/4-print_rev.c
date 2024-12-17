#include "main.h"
/**
 * _puts - Prints a string in reverse, followed by a new line
 * @str: Pointer to the string to be printed
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
}
for (i--; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}

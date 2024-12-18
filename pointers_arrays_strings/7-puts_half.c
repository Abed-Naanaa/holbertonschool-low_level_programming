#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: Pointer to the string to be printed
 */
void puts_half(char *str)
{
int len, start, i;

/* Calculate the length of the string */
for (len = 0; str[len] != '\0'; len++)
{
}

/* Determine the starting index for the second half */
if (len % 2 == 0)
{
start = len / 2;
}
else
{
start = (len - 1) / 2 + 1;
}

/* Print the second half of the string */
for (i = start; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

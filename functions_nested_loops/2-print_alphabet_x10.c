#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet 10 times
*
* Description: Uses _putchar to print the alphabet in lowercase
* followed by a newline, repeated 10 times.
*/
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}

#include "main.h"
/**
* print_alphabet - Prints the alphabet in lowercase
*
* Description: Uses _putchar to print each letter of the alphabet
* followed by a newline.
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

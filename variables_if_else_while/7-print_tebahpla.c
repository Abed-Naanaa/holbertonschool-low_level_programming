#include <stdio.h>

/**
 * main - Prints the alphabet in reverse  using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}

putchar('\n');

return (0);
}

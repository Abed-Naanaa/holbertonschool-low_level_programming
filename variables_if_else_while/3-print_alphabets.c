#include <stdio.h>

/**
 * main - Prints the alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
char CH;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

for (CH = 'A'; CH <= 'Z'; CH++)
{
putchar(CH);
}

putchar('\n');

return (0);
}

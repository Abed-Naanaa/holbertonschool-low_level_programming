#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
int i, len;
char tmp;

for (len = 0; s[len] != '\0'; len++)
{
}

for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
}
}

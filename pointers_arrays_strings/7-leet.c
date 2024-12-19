#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
char *ptr = str;
char letters[] = "aeotlAEOTL";
char replacements[] = "4307143071";
int i;
while (*ptr)
{
for (i = 0; letters[i] != '\0'; i++)
{
if (*ptr == letters[i])
{
*ptr = replacements[i];
break;
}
}
ptr++;
}
return (str);
}

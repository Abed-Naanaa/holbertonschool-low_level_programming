#include "main.h"

/**
*_strcat - Concatenates two strings.
*@dest: The destination string.
*@src: The source string.
*
*Return: A pointer to the resulting string `dest`.
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
char *dest_end = dest;
while (*dest_end != '\0')
{
dest_end++;
}
for (i=0; i<n; i++)
{
*dest_end = *src;
dest_end++;
src++;
}
*dest_end = '\0';
return (dest);
}

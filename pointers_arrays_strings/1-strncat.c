#include "main.h"

/**
*_strncat - Concatenates two strings using at most n bytes from src.
*@dest: The destination string.
*@src: The source string.
*@n: The maximum number of bytes to use from src.
*
*Return: A pointer to the resulting string `dest`.
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;
int i = 0;
/* Find the end of the dest string */
while (*dest_end != '\0')
{
dest_end++;
}
/* Append src to dest, at most n bytes */
while (i < n && *src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
i++;
}
/* Add the null terminator */
*dest_end = '\0';
return (dest);
}

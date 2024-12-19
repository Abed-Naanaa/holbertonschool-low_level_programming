#include "main.h"

/**
*_strncpy - Copies a string up to n bytes.
*@dest: The destination buffer.
*@src: The source string.
*@n: The maximum number of bytes to copy from src.
*
*Return: A pointer to the resulting string `dest`.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* Copy characters from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* Pad the rest of dest with '\0' if src is shorter than n */
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}

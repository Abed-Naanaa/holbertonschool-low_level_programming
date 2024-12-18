#include "main.h"

/**
*_strcpy - Copies the string pointed to by src, including the
*          terminating null byte (\0), to the buffer pointed to by dest.
*@dest: Destination buffer where the string is copied.
*@src: Source string to be copied.
*Return: Pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0') /* Copy each character from src to dest */
{
dest[i] = src[i];
i++;
}
dest[i] = '\0'; /* Add the null-terminating byte at the end */
return (dest);
}

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')  /* Base case: if we reach the end of the string */
{
return (0);  /* Return length 0 when we reach the null character */
}
else
{
return (1 + _strlen_recursion(s + 1));  /* 1 for the */
}
}

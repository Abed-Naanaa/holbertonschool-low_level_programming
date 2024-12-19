#include "main.h"
#include <string.h>
#include <stddef.h>

/**
* cap_string - Capitalizes all words in a string.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;
char separators[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{
if (i == 0 || strchr(separators, str[i - 1]) != NULL)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
}
i++;
}
return (str);
}

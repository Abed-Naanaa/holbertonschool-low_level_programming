#include "main.h"
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
int j;
char separators[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{
if (i == 0)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 'a' + 'A';
}
else
{
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i - 1] == separators[j])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 'a' + 'A';
break;
}
}
}
i++;
}
return (str);
}

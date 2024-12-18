#include "main.h"
#include <limits.h>

/**
*_atoi - Converts a string to an integer.
*@s: The string to convert.
*Return: The integer value of the converted string.
*/
int _atoi(char *s)
{
int i = 0, sign = 1;
unsigned int result = 0; /* Use unsigned to handle overflow detection */

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
/* Check for potential overflow before adding the next digit */
if (result > (unsigned int)(INT_MAX / 10) ||
(result == (unsigned int)(INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
{
return (sign == 1 ? INT_MAX : INT_MIN);
}
result = result * 10 + (s[i] - '0');
}
else if (result > 0)
break;
i++;
}
return ((int)(result *sign));
}

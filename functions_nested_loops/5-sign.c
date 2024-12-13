#include "main.h"

/**
* print_sign - Prints the sign of a number
* @n: The number to check
*
* Description: This function checks the value of `n` and prints the sign
* accordingly. It returns:
*  - 1 and prints '+' if n is greater than zero.
*  - 0 and prints '0' if n is zero.
*  - -1 and prints '-' if n is less than zero.
*
* Return: 1 if n > 0, 0 if n == 0, -1 if n < 0.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

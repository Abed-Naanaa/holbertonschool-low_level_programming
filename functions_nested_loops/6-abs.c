#include "main.h"

/**
* _abs - Computes the absolute value of an integer
* @n: The integer to compute the absolute value of
*
* Description: This function computes and returns the absolute value
* of the integer passed to it.
*
* Return: The absolute value of the integer n.
*/
int _abs(int n)
{
if (n < 0)
return (-n);
else
return (n);
}

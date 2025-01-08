#include "main.h"

/**
 * _sqrt_helper - Helper function to find the natural square root.
 * @n: The number to calculate the square root for.
 * @guess: The current guess for the square root.
 * Return: The natural square root, or -1 if it does not have one.
 */
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 * Return: The natural square root, or -1 if it does not have one.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}

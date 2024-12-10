#include <stdlib.h>
#include <time.h>
#include <stdio.h>  // Added to use printf

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));  // Initialize random number generator
    n = rand() - RAND_MAX / 2;  // Generate a random number

    if (n > 0)
    {
        printf("%d is positive\n", n);  // Print positive number
    }

    if (n < 0)
    {
        printf("%d is negative\n", n);  // Print negative number
    }

    if (n == 0)  // Corrected comparison operator
    {
        printf("%d is zero\n", n);  // Print zero
    }

    return (0);
}

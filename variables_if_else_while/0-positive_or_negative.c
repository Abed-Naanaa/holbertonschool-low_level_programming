#include <stdio.h> /* Added to use printf */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }

    if (n < 0)
    {
        printf("%d is negative\n", n);
    }

    if (n == 0)  /* Corrected from 'n = 0' to 'n == 0' for comparison */
    {
        printf("%d is zero\n", n);
    }

    return (0);
}

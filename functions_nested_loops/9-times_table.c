#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i < 10; i++)  // Outer loop for rows (0 to 9)
    {
        for (j = 0; j < 10; j++)  // Inner loop for columns (0 to 9)
        {
            result = i * j;
            
            if (j != 0)
                _putchar(',');  // Add comma before printing results from the second column
            if (result < 10)  // If result is a single digit
            {
                _putchar(' ');  // Add leading space for single-digit numbers
                _putchar(result + '0');
            }
            else  // If result is a double digit
            {
                _putchar(result / 10 + '0');  // Print tens digit
                _putchar(result % 10 + '0');  // Print ones digit
            }
        }
        _putchar('\n');  // New line after each row
    }
}

#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: a 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /* Loop through each row */
	{
		for (j = 0; j < 8; j++) /* Loop through each column */
		{
			putchar(a[i][j]); /* Print each character */
		}
		putchar('\n'); /* Print a new line after each row */
	}
}

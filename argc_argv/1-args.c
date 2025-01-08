#include <stdio.h>

/**
 * main - Prints the number of arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the program name and arguments.
 *
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc -1);
	return (0);
}

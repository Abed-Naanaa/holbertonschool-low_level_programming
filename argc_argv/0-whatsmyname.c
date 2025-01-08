#include <stdio.h>

/**
* main - Prints the name of the program.
* @argc: The number of command-line arguments (not used here).
* @argv: An array of strings containing the program name and arguments.
*
* Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}

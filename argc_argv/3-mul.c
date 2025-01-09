#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two or more numbers passed as command-line arguments.
 * @argc: The number of command-line arguments, including the program name.
 * @argv: An array of strings containing the program name and the arguments.
 *
 * Return: 0 if multiplication is successful, 1 if there are not enough args.
 */
int main(int argc, char *argv[])
{
int i = 1;
int mul = 1;
if (argc > 2)
{
for (i = 1; i < argc; i++)
mul *= atoi(argv[i]);
printf("%d\n", mul);
}
else
{
printf("error\n");
return (1);
}
return (0);
}

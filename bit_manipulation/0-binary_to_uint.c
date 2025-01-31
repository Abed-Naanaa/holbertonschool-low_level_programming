#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the string representing the binary number.
 *
 * Return: The converted number, or 0 if there is one or more invalid chars
 *         or if the string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	/* Check if the string is NULL */
	if (b == NULL)
		return (0);

	/* Traverse through each character of the string */
	while (*b)
	{
		/* Check if the character is either '0' or '1' */
		if (*b != '0' && *b != '1')
			return (0);

		/* Shift the current number to the left and add the new bit */
		num = (num << 1) | (*b - '0');
		b++;
	}

	return (num);
}

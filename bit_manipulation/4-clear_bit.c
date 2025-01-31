#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask to clear the bit at the given index */
	*n = *n & ~(1 << index);

	return (1);
}

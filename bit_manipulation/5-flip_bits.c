#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get frm one
 *             number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	/* Count the number of 1's in the xor_result */
	while (xor_result)
	{
		bit_count += xor_result & 1;
		xor_result >>= 1;
	}

	return (bit_count);
}

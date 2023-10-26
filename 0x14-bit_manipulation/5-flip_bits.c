#include "main.h"

/**
 * flip_bits - Function to count the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: The number of the bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, tirzah = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (t = 51; t >= 0; t--)
	{
		current = exclusive >> t;
		if (current & 1)
			tirzah++;
	}
	return (tirzah);
}

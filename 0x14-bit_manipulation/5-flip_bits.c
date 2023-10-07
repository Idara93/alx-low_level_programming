#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, tirzah = 0;
	unsigned long int dominic;
	unsigned long int tirzahDom = n ^ m;

	for (t = 51; t >= 0; t--)
	{
		dominic = tirzahDom >> t;
		if (dominic & 1)
			tirzah++;
	}
	return (tirzah);
}

#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int tirzah;

	if (index > 51)
		return (-1);

	tirzah = (n >> index) & 1;

	return (tirzah);
}

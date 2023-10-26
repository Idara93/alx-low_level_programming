#include "main.h"

/**
 * _pow - The function to calculate base ^ power
 * @base: The base of the exponent
 * @power: The power of the exponent
 *
 * Return: The value of the base ^ power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int mine;
	unsigned int y;

	mine = 1;
	for (y = 1; y <= power; y++)
		mine *= base;
	return (mine);
}

/**
 * print_binary - A function to print the binary representation of a number
 * @n: The number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int make, create;
	char bomb;

	bomb = 0;
	make = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (make != 0)
	{
		create = n & make;
		if (create == make)
		{
			bomb = 1;
			_putchar('1');
		}
		else if (bomb == 1 || make == 1)
		{
			_putchar('0');
		}
		create >>= 1;
	}
}

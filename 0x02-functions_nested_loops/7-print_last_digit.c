#include "main.h"

/**
 * print_last_digit - Prints the last digits o
 * a number
 *
 * @n: Inputs number as an integer
 *
 * Return: last digit
 */

int print_last_digit(void)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

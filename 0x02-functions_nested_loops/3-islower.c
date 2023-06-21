#include "main.h"
/**
 * _islower - This shows 1 if input is lower case, Otherwise, shows 0
 *
 * Pc: The ASCII code character
 *
 * Return: 1 for lowercase, 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}

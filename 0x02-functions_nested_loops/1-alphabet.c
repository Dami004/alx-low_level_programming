#include "main.h"
/**
 * print_alphabet - prints in lowercase.
 *
 * Return: Always 0 {success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		purchar(i);
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>

/**
 * main - Prints lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char app[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(app[i]);
	}
	putchar('\n');
	return (0);
}

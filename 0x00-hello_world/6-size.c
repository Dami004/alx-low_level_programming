#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (succes)
*/
int main(void)
{
	printf("size of a char: %lld byte(s)\n", sizeof(char));
	printf("size of an int: %lld byte(s)\n", sizeof(int));
	printf("size of a long int: %lld byte(s)\n", sizeof(long int));
	printf("size 0f a long long int: %lld byte(s)\n", sizeof(long long int));
	printf("size of a float: %lld byte(s)\n", sizeof(float));
	return (0);
}

#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 102
 * Description: Write a program that computes and prints the sum of
 * the multiples of 3 or 5 below 1024 (excluded),followed by a new line
 * Return: Always (Success)
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
		z += i;
	}

		i++;
	}

	printf("%d\n", z);
	return (0);
}

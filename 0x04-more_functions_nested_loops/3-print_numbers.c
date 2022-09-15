#include "main.h"

/**
 * print_numbers - entry point
 * Description: functions that prints the numbers form 0 to 9
 * followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (number = '0' ; number <= '9' ; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}

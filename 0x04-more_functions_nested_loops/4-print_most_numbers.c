#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 or 4)
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if (number != 50 && number != 52)

		_putchar(number);
	}
	_putchar('\n');
}



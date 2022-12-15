#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the characte c to stdout
 * @c: the characte to print
 *
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

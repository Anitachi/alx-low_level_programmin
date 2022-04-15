#include "main.h"
/**
 * print_line - Entry point
 * @n: assign a value
 * Return: print 0 or /n
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_last_digit - print last digit of a num
 * @n: assign avalue
 * Return: always 0
 */

print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
	{
		_putchar(-1 + 0);
		return (-1);
	}
	else
	{
		_putchar(1 + 0);
		return (1);
	}
}

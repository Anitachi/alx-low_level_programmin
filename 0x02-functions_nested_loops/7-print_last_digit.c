#include "main.h"
/**
 * print_last_digit - print last digit of a num
 * @n: assign avalue
 * Return: always 0
 */

int print_last_digit(int n)
{
	int r = 0;

	if (r < 0)
	{

		r = -1 * (n % 10);
		_putchar(r + 0);
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar(r + 0);
		return (r);
	}
}

#include "main.h"
/**
 * print_numbers -  prints the number from 0 to 9
 * Return: is always 0
 */

void print_numbers(void)
{
	int a;
		for (a = '0'; a <= '9'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
}

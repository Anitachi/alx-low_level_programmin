#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
<<<<<<< HEAD
	unsigned int n1;

	if (n
			< 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
{
	n1 = n;
}
if (n1 / 10)
{
	print_number(n1 / 10);
=======
unsigned int n1;
if (n < 0)
{
n1 = -n;
_putchar('-');
}
else
{
n1 = n;
}

if (n1 / 10)
{
print_number(n1 / 10);
>>>>>>> e201f02579d26e06fdc6b1870ad8a304c13006f1
}
_putchar((n1 % 10) + '0');
}

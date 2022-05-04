#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: value
 * Return: is void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

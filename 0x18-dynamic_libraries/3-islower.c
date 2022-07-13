#include "main.h"

/**
 * _islower -  a function tht checks for lowercase
 * @c: char to be checked
 * Return: if lower case return 1 else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

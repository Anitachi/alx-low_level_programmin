#include <main.h>
/**
 * _isupper - checks for uppercase character
 * @c: assign a value
 * Return: if it is uppercase return 1 else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return  (1);
	}
	return (0);
}

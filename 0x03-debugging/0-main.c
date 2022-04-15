#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- assign a random num to the variable of n
 * Return: value is always 0
 */
void positive_or_negative(int i)
{
	int i;

	if (i > 0)
	{
		printf("%d is positive/n" i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main- assign a randon number to the variable n each time it is executed
 *Return: is always 0
 */

int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 7;

	if (lastn > 5)
	{
		printf("last digit of %d and %d is greater than 5\n", n,  lastn);
	}
	else if (lastn == 0)
	{
		printf("last digit of %d and %d is zero\n", n, lastn);
	}
	else
	{
		printf("last digit of %d and %d is less than 6 and not 0\n", n, lastn);
	}

	return (0);
}


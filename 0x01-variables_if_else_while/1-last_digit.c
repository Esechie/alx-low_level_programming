#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - void
 * Return: success (0)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("%d and is greater than 5\n", ld);
	}
	else if (ld == 0)
	{
		printf("%d and is 0\n", ld);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", ld);
	}
	return (0);
}

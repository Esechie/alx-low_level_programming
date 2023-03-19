#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Void
 * Return: Success (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is a positive number\n", n);
	}
	else if (n == 0)
	{
		printf("%d put a number higher than 0\n", n);
	}
	else
	{
		printf("%d number is a negative number\n", n);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - Using PUTCHAR function to print base ten numbers
 * Return: success (0)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar (n);
		n++;
	}
	putchar('\n');
	return (0);
}

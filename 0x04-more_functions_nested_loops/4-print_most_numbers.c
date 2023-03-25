#include "main.h"
/**
 * print_most_numbers - print the numbers zero to nine
 * Description: prints the numbers excluding 2 and 4
 * Return: The numbers since zero up to nine
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}

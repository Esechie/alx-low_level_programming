#include "main.h"
/**
 * print_alphabet - Main function
 * Return: success (0)
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}

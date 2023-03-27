#include "main.h"
/**
 * _puts - to put content
 * @str: String to focus on
 * Return: Success Length os str
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

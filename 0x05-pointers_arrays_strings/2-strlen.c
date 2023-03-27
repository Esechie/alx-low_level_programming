#include "main.h"

/**
 * _strlen - Determines the length of a string
 * @s: Variable to be focused on
 * Return: Success
 *
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

#include "main.h"
/**
 * _islower - displays lowest alphabet on the screent
 * @C - is the char to be checked 
 * Return: success (1)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} 
	else
	{
		return (0);
	}
}

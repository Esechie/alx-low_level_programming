#include "main.h"

/**
 * *_strncpy - copies string
 * @dest: Destination string
 * @src: source string
 * @n: number of strings
 * Return: Success Destination
 *
 */

char *strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}

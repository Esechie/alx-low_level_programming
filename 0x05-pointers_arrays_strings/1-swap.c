#include "main.h"
/**
 * swap_int - Function to hold changed docket
 * @a: first focus
 * @b: second focus
 * return: success
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

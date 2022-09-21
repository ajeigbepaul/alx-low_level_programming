#include "main.h"
/**
 * reverse_array - Reverse the content of an array
 * @a: The array of integer
 * @n: The number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 1; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

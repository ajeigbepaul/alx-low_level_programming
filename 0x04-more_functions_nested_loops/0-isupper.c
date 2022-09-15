#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code
 * @c: The parameter to check the code
 * Return: 1 and 0
 *
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

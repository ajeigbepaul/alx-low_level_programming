#include "main.h"
/**
 * _islower - Checks for lower character
 *
 * @c: A function that checks for lower character
 * Return: 1 and 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

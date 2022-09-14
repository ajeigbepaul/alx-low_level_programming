#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: Is the int that will use for the argument of the
 * Function that computes the absolute value of an integer.
 * Return: 0
*/
int _abs(int n)
{
	if (n > 0 || n == 0)
		return (n);
	else
		return (n * -1);
}

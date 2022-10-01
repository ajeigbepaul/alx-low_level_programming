#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: Function that checks for alphabetic character
 * Return: returns 1 and 0 depending on condition
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _strcmp - compares pointer to two string
 * @s1: A pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 *
 * Return: 1, 0, -1
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * @dest: The buffer storing the string
 * @src: The source string
 * @n: The max number of bytes
 * Return: A pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0; src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}

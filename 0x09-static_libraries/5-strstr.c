#include "main.h"
/**
 * _strstr - locate a substrig
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}

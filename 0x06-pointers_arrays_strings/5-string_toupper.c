#include "main.h"
/**
 * string_toupper - Changes all lowercase letter to uppercase
 * @str: The string to be change
 *
 * Return: A pointer to the changed string
*/
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++
	}
	return (str);
}

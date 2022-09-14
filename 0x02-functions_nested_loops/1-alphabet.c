#include "main.h"
/**
 * print_alphabet - Print alphabets in lowercase
 *
 * Description: Write a function that prints the alphabet, in
 * lowercase, followed by a new line.
 * Return: 0
 *
*/
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}

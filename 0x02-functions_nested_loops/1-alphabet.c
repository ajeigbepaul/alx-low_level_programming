#include "main.h"
/**
 * main - Print alphabets in lowercase
 *
 * Description: Write a function that prints the alphabet, in 
 * lowercase, followed by a new line.
 * Return: 0
 *
*/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}

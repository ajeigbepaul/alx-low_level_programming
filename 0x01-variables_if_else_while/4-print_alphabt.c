#include <stdio.h>
/**
 * main - print the alphabets in lowecase followed by a newline
 *
 * Description: Write a program that prints the alphabet
 * in lowercase, followed by a new line.
 * Return: 0
 *
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	if (ch != 'e' && ch != 'q')
		putchar(ch);
	putchar('\n');
	return (0);
}


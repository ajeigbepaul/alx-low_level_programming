#include <stdio.h>
/**
 * main - print characters in both lowercase and uppercase
 *
 * Description: Write a program that prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 * Return: 0
*/
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

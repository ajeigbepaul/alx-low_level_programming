#include <stdio.h>
/**
* main - print alphabet in lowercase
*
* Description: Write a program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

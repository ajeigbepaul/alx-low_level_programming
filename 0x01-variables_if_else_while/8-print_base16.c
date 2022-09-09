#include <stdio.h>
/**
 * main - print all the numbers of base 16
 *
 * Description: using the main Write a program that prints all the
 * numbers of base 16 in lowercase
 * Return: 0
 *
*/
int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}

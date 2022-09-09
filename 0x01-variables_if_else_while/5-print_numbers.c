#include <stdio.h>
/**
 * main - print single digits from 0 to 10
 *
 * Description: Write a program that prints all single digit numbers of base 10 starting from 0
 * Return: 0
 *
*/
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		printf("%i", i);
	printf("\n");
	return (0);
}

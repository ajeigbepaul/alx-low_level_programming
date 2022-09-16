#include "main.h"
#include <stdio.h>

/**
 * main - program that print number buzz, fizz and fizzbuzz
 *
 * Description: function that print fizz buzz and fizzbuzz
 * Return: return 0
*/
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf(" FizzBuzz");
		else if (num == 1)
		{
			printf("%d", num);
		}
		else
			printf(" %d", num);
	}
	printf('\n');
	return (0);
}

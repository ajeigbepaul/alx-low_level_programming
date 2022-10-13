#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable number of numbers to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int num;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int)
		printf("%d", num);
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}

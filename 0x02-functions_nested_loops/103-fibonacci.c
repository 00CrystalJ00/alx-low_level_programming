#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: sum of even-valued Fibonacci sequence not exceed 4million
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float x;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			x += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", x);

	return (0);
}


#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * numLength - returns string length
 * @num: operand number
 * Return: number of digits
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - Entry point
 * Description: first 98 fibonacci num with 1 and 2 followed by new line
 * Return: 0
 */

int main(void)
{
	int n, i;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (n = 1; n <= 98; ++n)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		i = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && i > 0)
		{
			printf("%d", 0);
			--i;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (n != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}


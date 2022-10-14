#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-program entry
 * Return: 0 if no error, non-0 if error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n". n);
	}
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);


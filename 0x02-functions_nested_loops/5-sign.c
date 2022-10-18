#include "main.h"

/**
 * print_sign - prints a number's sign
 * @n: the number of the sign to be printed
 * Return: 1 if number > zero
 * -1 if number is< zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchae('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}


#include "main.h"
#include <unistd.h>

/**
 * _putchar _ writes the character c to tddout
 * @c: to print character
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}:,

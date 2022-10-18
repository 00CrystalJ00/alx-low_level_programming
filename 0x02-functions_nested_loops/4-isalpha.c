#include "main.h"

/**
 * _isalpha - checks alphabets
 * @c: character to be checked
 *
 * Return: 1 if character is a letter, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}


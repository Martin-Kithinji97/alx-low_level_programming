#include "main.h"
/**
 * _isupper - the function prints alphabets
 * @c: the parameter prints out uppercase and lowercase
 * Return: returns either 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


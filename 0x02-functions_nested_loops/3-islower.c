#include "main.h"
/**
  * _islower - prints loer case alphabets
  *
  * @c: parameter to be printed
  *
  * Return: always 0 when successful
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

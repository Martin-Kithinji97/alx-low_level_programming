#include "main.h"
/**
  * _isalpha - prints both lowercase and uppercase
  *
  * @c: prints out characters
  *
  * Return: always return zero when successful
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

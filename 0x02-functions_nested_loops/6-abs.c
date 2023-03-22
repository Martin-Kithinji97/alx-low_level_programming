#include "main.h"
/**
  * _abs - a function to check  absolute numbers
  *
  * @a: the parameter to be checked
  *
  * Return: return the value of a
  */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

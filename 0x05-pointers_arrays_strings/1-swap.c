#include "main.h"
/**
  * swap_int - function takes in an integer
  * @a: parameter takes an integer
  * @b: parameter takes an integer
  * Return: always 0 when successful
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

#include "main.h"
/**
  * print_square - the function prints the squares
  * @size: the parameter takes in an integer
  * Return: always 0 when successful
  */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
  * print_line - the function prints a line
  * @n: the parameter takes in a number
  * Return: it returns 0 when successful
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

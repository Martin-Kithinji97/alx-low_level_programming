#include "main.h"
/**
  * print_numbers - the function prints numbers
  * _putchar - prints out digits
  * Return: returns void
  */
void print_numbers(void)
{
	char c;

	for (c = '0'; c  <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

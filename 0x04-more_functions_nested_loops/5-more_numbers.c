#include "main.h"
/**
  * more_numbers - prints more numbers
  * Return: always return 0
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = '0'; i <= '14'; i++)
	{
		for (j = '0'; j <= '14'; j++)
			_putchar(j);
	}
	_putchar(i);
	_putchar('\n');
}

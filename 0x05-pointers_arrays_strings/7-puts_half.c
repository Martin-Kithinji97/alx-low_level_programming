#include "main.h"
/**
  * puts_half - the functions prints integers
  * @str: the parameter accepts an integer
  * Return: always 0 when successful
  */
void puts_half(char *str)
{
	int i;

	for (i = 5; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

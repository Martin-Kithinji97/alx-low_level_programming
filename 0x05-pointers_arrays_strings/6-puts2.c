#include "main.h"
/**
  * puts2 - function prints strings
  * @str: parameter accepts strings
  * Return: always 0 when successful
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
#include "main.h"
/**
  * _puts - function prints a string
  * @str: the parameter prints out string
  * Return: always 0 when successful
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

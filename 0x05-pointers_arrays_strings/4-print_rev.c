#include "main.h"
/**
  * print_rev - the function prints in reverse
  * @s: the parameter takes strings
  * Return: always 0 when successful
  */
void print_rev(char *s)
{
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)
		count++;
	for (j = count; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}

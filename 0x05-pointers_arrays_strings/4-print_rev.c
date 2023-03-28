#include "main.h"
/**
  * print_rev - the function prints in reverse
  * @s: the parameter takes strings
  * Return: always 0 when successful
  */
void print_rev(char *s)
{
	int o;
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}



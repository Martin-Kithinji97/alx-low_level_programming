#include "main.h"
/**
  * rev_string - the function prints a string
  * @s: the parameter takes a number
  * Return: always 0 when successful
  */
void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = count; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

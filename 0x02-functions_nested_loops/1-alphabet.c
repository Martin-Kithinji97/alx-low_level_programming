I#include "main.h"
/**
  * print_alphabet - prints alphabets
  *
  * Return: always 0 when succesful
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

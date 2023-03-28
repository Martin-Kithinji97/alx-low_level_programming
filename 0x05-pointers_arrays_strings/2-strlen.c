#include "main.h"
/**
  * _strlen - the function calculates the length of string
  * @s: parameter takes in an integer
  * Return: always zero when successful
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

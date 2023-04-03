#include "main.h"
/**
  * *_memset - fills memory to a constant patameter
  * @s: takes a parameter
  * @b: takes a parameter
  * @n: it takes in an integer
  * Return: return s when success
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

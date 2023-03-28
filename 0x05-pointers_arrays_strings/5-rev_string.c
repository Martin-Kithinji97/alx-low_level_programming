#include "main.h"
/**
  * rev_string - the function prints a string
  * @s: the parameter takes a number
  * Return: always 0 when successful
  */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}



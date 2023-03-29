#include "main.h"
/**
  * *_strncpy - the function copies a string
  * @dest: the parameter takes an input
  * @src: the parameter takes an input
  * @n: the parameter takes an input
  * Return: always 0 when successful
  */
char *_strncpy(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

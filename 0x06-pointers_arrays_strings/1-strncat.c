#include "main.h"
/**
  * *_strncat - tthe function takes in a parameter
  * @dest: the parameter is the destination
  * @src: the parameter is the source
  * @n: the parameter
  * Return: always 0 when successful
  */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}

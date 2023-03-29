#include "main.h"
/**
  * *_strcat - the function appends strings
  * @dest: the function takes a parameter
  * @src: the function takes a parameter
  * Return: always 0 when successful
  */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}

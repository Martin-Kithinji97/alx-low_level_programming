#include "main.h"
/**
  * *_strcpy - function prints characters
  * @dest: parameter function
  * @src: parameter function
  * Return: always 0 when success
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}

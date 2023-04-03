#include "main.h"
/**
  * *_memcpy - copies a memory area
  * @dest: its the destination parameter
  * @src: its the source parameter
  * @n: the parameter accepts  an integer
  * Return: return dest when successful
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

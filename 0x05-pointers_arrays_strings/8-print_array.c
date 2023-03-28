#include "main.h"
/**
  * print_array - function prints out array
  * @a: parameter takes in an integer
  * @n: parameter takes in an integer
  * Return: always 0 when successful
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d , ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

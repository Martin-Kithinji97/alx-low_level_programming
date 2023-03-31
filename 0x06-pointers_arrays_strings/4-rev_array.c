#include "main.h"
/**
  * reverse_array - the function accepts an integer
  * @a: the parameter takes an integer
  * @n: the parameter takes an integer
  * Return: always 0 when success
  */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

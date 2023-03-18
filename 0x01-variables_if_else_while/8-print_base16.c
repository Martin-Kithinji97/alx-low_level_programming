#include <stdio.h>
/**
  * main - its the main function
  * Description - prints all numbers to base 16
  * Return: always 0 if success
  */

int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}

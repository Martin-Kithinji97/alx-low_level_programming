#include <stdio.h>
/**
  * main - its the main function
  * Description - prints numbers with commas
  * Return: always 0 when successful
  */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}


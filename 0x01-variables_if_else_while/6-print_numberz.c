#include <stdio.h>
/**
  * main - its the main function
  * description - it prints numbers to base 10
  * Return: always 0 if successful
  */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}

	putchar('\n');
	return (0);
}

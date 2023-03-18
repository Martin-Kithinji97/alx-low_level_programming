#include <stdio.h>
/**
  * main - its the main function
  * Description - prints all numbers to base 16
  * Return: always 0 if success
  */

int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

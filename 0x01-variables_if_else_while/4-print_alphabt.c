#include <stdio.h>
/**
  * main - its the main function
  * description - does not print q and e
  * Return: always is 0 if success
  */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 113 || n == 101)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

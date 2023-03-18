#include <stdio.h>
/**
  * main - its a function
  * Description - prints alphabets in reverse
  * Return: always 0 if successful
  */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

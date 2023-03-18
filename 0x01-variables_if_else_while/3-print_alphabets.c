#include <stdio.h>
/**
  * main - its the main function
  * description - prints both lower and upper alphabets
  * Return: always 0 when success
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}

	putchar('\n');
	return (0);
}

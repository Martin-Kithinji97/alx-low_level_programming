#include <stdio.h>

/**
  * main - its the main function of the programme
  *
  *Return: 0 if code is succesful
  */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %zu byte(s)", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}

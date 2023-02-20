#include <stdio.h>

/**
 * main - This is a  program that prints the size of various types
 * based on the computer and it is compiled and run on ...
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char is: %lu byte(s)\n", sizeof(a));
	printf("Size of an int is: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int is: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int is: %lu byte(s)\n", sizeof(d));
	printf("Size of a float is: %lu byte(s)\n", sizeof(e));
	return (0);
}

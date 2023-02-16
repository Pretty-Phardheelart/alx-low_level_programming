#include <stdio.h>
/**
 * main - This is a  program that prints the size of various types
 * based on the computer and it is compiled and run on ...
 * Return: Always 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

printf("Size of a char is: %zu byte(s).\n", (unsigned long)sizeof(c));
printf("Size of an int is: %zu byte(s).\n", (unsigned long)sizeof(i));
printf("Size of a long int is: %zu byte(s).\n", (unsigned long)sizeof(l));
printf("Size of a long long int is: %zu byte(s).\n", (unsigned long)sizeof(d));
printf("Size of a float is: %zu byte(s).\n", (unsigned long)sizeof(f));
return (0);
}

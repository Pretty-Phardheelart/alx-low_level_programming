#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return 0 (Successs)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

printf("Size of a char is: %lu byte(s).\n", (unsigned long)sizeof(c));
printf("Size of an int is: %lu byte(s).\n", (unsigned long)sizeof(i));
printf("Size of a long int is: %lu byte(s).\n", (unsigned long)sizeof(l));
printf("Size of a long long int is: %lu byte(s).\n", (unsigned long)sizeof(d));
printf("Size of a float is: %lu byte(s).\n", (unsignedlongsizeof(f));
return (0);
}

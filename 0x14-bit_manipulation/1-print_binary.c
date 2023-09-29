#include "main.h"

/**
 * print_binary - prints the binary representaion of a number
 * @n: number to show its bits (binary)
 * Return: binary representaion of (n)
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	printf("%ld", n % 2);
}

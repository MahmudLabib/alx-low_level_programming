#include "main.h"

/**
 * print_binary - prints the binary representaion of a number
 * @n: number to show its bits (binary)
 * Return: binary representaion of (n)
 */
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) ? '1' : '0');
}

#include "main.h"

/**
 * main - using argv to print file name
 * @argc: No. of arguments passed to main
 * @argv: Array of strings
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

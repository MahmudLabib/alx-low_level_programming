#include "main.h"

/**
 * main - Program prints the number of argumns passed into
 * @argc: No. of argumns passed
 * @argv: Array of strins, have values of passed args
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}

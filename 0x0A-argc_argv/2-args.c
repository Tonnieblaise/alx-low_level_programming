#include <stdio.h>

/**
 * main - Function that prints all arguments received
 *
 * @argc: number of arguments
 * @argv: array of arguments received
 *
 * Return: arguments received
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

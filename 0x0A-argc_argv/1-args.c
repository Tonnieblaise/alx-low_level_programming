#include <stdio.h>

/**
 * main - A function that prints its name
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: number of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

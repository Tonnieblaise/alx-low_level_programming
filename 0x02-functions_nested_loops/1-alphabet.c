#include "main.h"
/**
 * print_alphabeth - Entry point
 *
 * Description: To print alphabeth in lowercase
 *
 * Return: 0
 */

void print_alphabeth(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

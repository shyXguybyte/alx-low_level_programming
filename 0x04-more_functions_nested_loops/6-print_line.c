#include "main.h"
/**
 * print_line -  a c function
 * @n: argument
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int counter = 10;

	while (counter != 0)
	{
		print_alphabet();
		_putchar('\n');
		counter--;
	}
}


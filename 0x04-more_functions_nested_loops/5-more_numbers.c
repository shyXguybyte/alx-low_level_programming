#include "main.h"
/**
 * more_numbers - prints number from 0 to 14,
 * 10 times,followed by a new line
 * Return: numbers
 */
void more_numbers(void)
{
	int i;
	int j = 10;

	while (j != 0)
	{
		for (i = 0; i < 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		j--;
	}
}

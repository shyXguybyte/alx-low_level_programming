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
		for (i = 0; i < 15; i++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		j--;
	}
}

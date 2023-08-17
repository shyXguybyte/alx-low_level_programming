#include "main.h"
/**
 * _isupper - check if c is uppercase
 * @c: the character to check
 * Return: 0 if uppercase 1 if lowercase
 */
int _isupper(int c)
{
	if (c < 97)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('1');
		return (1);
	}
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar('0');
	return (0);

}

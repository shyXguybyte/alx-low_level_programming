#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 *
 * Return: a string
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * description: a c program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch < 'z' + 1 ; ch++)
	{
		putchar (ch);
	}
	return (0);
}

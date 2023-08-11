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
	int char1, char2;

	for (char1 = 'a'; char1 < 'z' + 1; char1++)
	{
		putchar(char1);
	}
	for (char2 = 'A'; char2 < 'Z' + 1; char2++)
	{
		putchar(char2);
	}
	putchar('\n');
	return (0);
}

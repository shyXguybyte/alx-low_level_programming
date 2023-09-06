#include <stdio.h>

/**
 * main - entry point
 * @argc: length of array
 * @argv: array
 *
 * Return: all arguments per line
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

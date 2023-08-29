#include "main.h"
/**
 * *_memcpy - a function that copy a memory area
 * @dest: to be filled
 * @src: to be copied
 * @n: number of copy times
 *
 * Return: the filled memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

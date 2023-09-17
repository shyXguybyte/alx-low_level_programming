#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list argptr;

	va_start(n, argptr);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argptr, int);
	}
	va_end(argptr);
	return (sum);
}

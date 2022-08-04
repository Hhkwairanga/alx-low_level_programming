#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);
		 while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		
		}
		va_end(args);
		return (sum);
	}
	return (0);
}

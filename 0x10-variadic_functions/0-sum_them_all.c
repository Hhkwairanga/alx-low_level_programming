#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int count = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	
	for (i = 0; i < n; i++)
		{
			int x = va_arg(args, unsigned int);

			count = count + x;
		
		}
		va_end(args);
		return (count);
}
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - return sum when when given numbers
* @n: int to be added 
* Return: sum if not 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list constantSum;
	unsigned int sum = 0;
	unsigned int j;
	
	if (n == 0)
		return (0);
	va_start(constantSum, n);

		for (j = 0; j < n; j++)
		sum += va_arg(constantSum, int);	
	va_end(constantSum); 

	return (sum);
}


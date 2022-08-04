#include <stdarg.h>
  2 #include "variadic_functions.h"
  3
/**
* sum_them_all - return sum when given unknown     amount of arguments
* @n: integers to add
* Return: sum
*/
  void print_numbers(const char *separator, const unsigned int n, ...);
 11 {
 12         va_list valist;
 13         unsigned int sum = 0, i;
 16         if (n == 0)
 17                 return (0);
 18         va_start(valist, n);
 19
 22                 sum += va_arg(valist, int);
 23         va_end(valist);
 24
 25         return (sum);
 26 }

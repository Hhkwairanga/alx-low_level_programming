#include "function_pointers.h"
  2
  3 /**
  4  * array_iterator - execute a function pointer o    n each element of an array
  5  * @array: array of integers
  6  * @size: size of array
  7  * @action: function pointer
  8  */
  9
 10 void array_iterator(int *array, size_t size, voi    d (*action)(int))
 11 {
 12         unsigned int i;
 13
 14         if (array && action)
 15                 for (i = 0; i < size; i++)
 16                         action(array[i]);
 17 }

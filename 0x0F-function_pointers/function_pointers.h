#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, voi    d (*action)(int))
#endif

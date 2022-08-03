#include "function_pointers.h"

/**
 * print_name - prints a name from pinter function
 * 
 * @name: string of name 
 * 
 * @f: pointer that takes stringa as argument
 */
 
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

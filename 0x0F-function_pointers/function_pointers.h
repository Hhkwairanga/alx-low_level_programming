#ifandef FUNCTION_POINTER_H_
#define FUNCTION_POINTER_H_

#include <stdlib.h> 

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif

#include <stdlib.h>
#include <stddef.h>

#ifndef FUNC_POINTERS
#define FUNC_POINTERS

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);

#endif
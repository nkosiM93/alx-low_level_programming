#include <stdio.h>
#include <stdarg.h>

#ifndef VARARG_H
#define VARARG_H
int sum_them_all(const unsigned int sum, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif

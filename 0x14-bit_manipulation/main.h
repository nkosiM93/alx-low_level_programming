#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned int _pow(unsigned int a, unsigned int d);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
void rev_bin(unsigned long int n, int check);
void print_binary(unsigned long int n);
#endif

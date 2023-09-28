
#include <stdlib.h>
#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H

unsigned int flip_bits(unsigned long int n, unsigned long int m);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
int _putchar(char c);
int check_valid_string(const char *b);
int get_endianness(void);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

 
#endif



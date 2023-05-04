#ifndef MAIN_H_
#define MAIN_H_
#include <stdlib.h>
#include <unistd.h>
/**
 * _putchar - prints characters to screen
 * @c: character
 *
 * Return: int
 */
int _putchar(char c);
unsigned int power(int x, int y);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif

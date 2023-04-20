#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <unistd.h>
#include <stdlib.h>
/**
 * _putchar - prints character to screen
 * @c: character
 *
 * Return: int
 */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif

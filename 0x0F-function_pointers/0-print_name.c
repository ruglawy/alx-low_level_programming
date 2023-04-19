#include "function_pointers.h"
/**
 * print_name - function that calls a function that prints hello + name
 * @name: name
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

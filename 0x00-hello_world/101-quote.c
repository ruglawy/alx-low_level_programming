#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Description: Printing a statement without printf() or puts()
 * Return: 1
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1, message, sizeof(message));
	return (1);
}

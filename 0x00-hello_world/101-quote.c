#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry Point
 * *message: idk
 *
 * Description: Printing a statement without printf() or puts()
 *
 * Return: 1
 */

int main(void)
{
	char *message = "and that piece of art is useful\""
	      "- Dora Korpar, 2015-10-19\n";
	write(1, message, strlen(message));
	return (1);
}

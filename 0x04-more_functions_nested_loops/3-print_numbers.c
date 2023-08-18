#include "main.h"

/**
 * print_numbers- a function that prints the numbers, from 0 to 9
 *
 * Return: print to stdout the alphabet, in lowercase, followed by a new line.
**/
void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
		_putchar(c + '0');
	_putchar('\n');
}		

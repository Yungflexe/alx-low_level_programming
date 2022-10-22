#include "main.h"

/**
 * print_alphabet_x10 -  print two alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	while (round < 10)
	{
	letter = 'a';
	while	(letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}

	round++;
	}
}

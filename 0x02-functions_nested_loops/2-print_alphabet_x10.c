#include "main.h"

/**
 * print_alphabet_×10 - print alphabet 10 times
 *
 * Return: always 0
 * description: its writen by yungflexe
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			 _putchar(letter);
			 letter++;
		}

		round++;
	}
}

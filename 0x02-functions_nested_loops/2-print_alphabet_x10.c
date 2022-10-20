#include "main.h"
/**
 * main -check the code
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int round = 0 ;
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

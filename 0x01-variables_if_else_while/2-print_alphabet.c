#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int Main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	printf("\n");
	return(0);

}

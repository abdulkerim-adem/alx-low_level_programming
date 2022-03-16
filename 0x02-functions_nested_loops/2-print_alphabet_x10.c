#include "main.h"

/**
 * print_alphabet_x10()-prints alphabet in lower casee
 * 10 times
 * return: 0-always success
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c='a';

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar (c);
			c++;
		}
		c = 'a';
		i++;
		_putchar ('\n');
	}
	return (0);
}

#include <stdio.h>

/**
 * main - print the alphabets in lowercase except e and q
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

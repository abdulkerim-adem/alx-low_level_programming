#include<stdio.h>

/**
 * main - prints all alphabet in reverse order
 * Return: 0/always success
 */
int main(void)
{
	for(char c='z';c>='a';c--)
	{
		putchar(c);
	}
	putchar('\n');
	return(0);
}

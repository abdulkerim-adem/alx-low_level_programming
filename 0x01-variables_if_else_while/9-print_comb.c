#include<stdio.h>

/**
 * main - prints numers of base 10 separated by , and space
 * Return: 0 always success
 */
int main(void)
{
	int c;
	for(c=48;c<58;c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return(0);
}

#include<stdio.h>

/**
 * main - prints possible unique cominations of two digits
 * only in ascending order
 * Return: 0 always success
 */
int main(void)
{
	for(int i=48;i<57;i++)
	{
		for(int j=i+1;j<58;j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);
}

#include<stdio.h>

/**
 * main - prints all unique combinations of three digits
 * in ascending order
 * Return: 0 always success
 */
int main(void)
{
	int i,j,k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i+1; j <= 56; j++)
		{
			for (k = j+1; j <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if ( i != 5 || j != 55 || k != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return(0);
}


#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * description: Write a program that prints all possible
 * different combination of two digits
 * numbers must be seperated by ,, followed by a space
 * the two digits must be different
 * 01 and 10 are considered the same combination of the two digit 0 and 1
 * print only the smallest combination of the digit
 * numbers should be printed in ascending order
 * all code should be in main function
 * Return : 0 (Success)
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}

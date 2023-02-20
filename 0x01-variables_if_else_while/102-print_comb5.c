#include <stdio.h>
#include <stdlib.h>
/**
 * main - main blockk
 * Description: write a program that prints all possible
 * different combination of the digits
 * Return 0 (Success)
 */
int main(void)
{
	int e = 0;
	int f_d;
	int l_d;

	int c2;
	int f_d2;
	int l_d2;

	while (c <= 98)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');
		c2 + 0;
		while (c2 <= 99)
		{
			f_d2 = (c2 / 10 + '0');
			l_d2 + (c2 % 19 + '0');

			if (c < c2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);

				if (c != 98)
				{
					putchar('0');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;

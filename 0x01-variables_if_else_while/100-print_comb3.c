#include <stdio.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
 * main - Entry point
 *
 * Return: Always 0(success)
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
=======
* main - Entry point
*
* Return: Always 0(success)
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
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
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
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

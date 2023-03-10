#include "main.h"
/**
<<<<<<< HEAD
* print_alphabet_x10 - Entry
* print alphabet x10 - prints 10 times the alphabet, in lowercase
* Return: Always 0
*/

void print_alphabet_x10(void)

{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
=======
*print_alphabet_x10 - Entry
*print_alphabet_x10 - print the alphabet ten times
*Return: Always 0
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

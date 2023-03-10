#include "main.h"
<<<<<<< HEAD

/**
 * puts2 - prints one character out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
=======
/**
* puts2 - prints one character out of two
* @str: input
* Return: print
*/
void puts2(char *str)
{
int i = 0;
for (; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
_putchar(str[i]);
else
continue;
}
_putchar('\n');
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

#include "main.h"
<<<<<<< HEAD

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
=======
/**
* print_rev - prints a string in reverse
* @s: string to be printed
*/
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
for (i = i - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

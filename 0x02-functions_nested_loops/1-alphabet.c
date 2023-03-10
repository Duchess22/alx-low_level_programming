#include "main.h"
/**
<<<<<<< HEAD
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
=======
*print_alphabet - print the alphabet
*Return: void
*/
void print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

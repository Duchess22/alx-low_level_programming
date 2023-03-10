#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
=======
*main - prints the alphabet
*Return: Always 0
*/
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i; for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

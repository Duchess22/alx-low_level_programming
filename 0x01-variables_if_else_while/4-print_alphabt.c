#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
=======
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
char c;
c = 'a';
while
(c <= 'z')
{
if
((c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
return (0);
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

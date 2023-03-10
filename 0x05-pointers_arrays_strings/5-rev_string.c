#include "main.h"
<<<<<<< HEAD

/**
 * rev_string - reverses a string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
=======
/**
* rev_string - reverses a string
* @s: input
* Return: string in reverse
*/
void rev_string(char *s)
{
char rv = s[0];
int c = 0;
int i;
while (s[c] != '\0')
c++;
for (i = 0; i < c; i++)
{
c--;
rv = s[i];
s[i] = s[c];
s[c] = rv;
}
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

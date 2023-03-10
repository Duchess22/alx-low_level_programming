#include "main.h"
<<<<<<< HEAD

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
=======
/**
* _strlen - returns the length of a string
* @s: string
* Return: length
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

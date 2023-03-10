#include "main.h"
<<<<<<< HEAD

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destrination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
=======
/**
* _strcpy - copies the string pointed to by src
* @dest: destrination
* @src: source
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int len = 0;
while (*(src + len) != '\0')
{
*(dest + len) = *(src + len);
len++;
}
*(dest + len) = '\0';
return (dest);
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

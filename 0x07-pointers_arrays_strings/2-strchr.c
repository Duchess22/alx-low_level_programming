#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
<<<<<<< HEAD

=======
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64

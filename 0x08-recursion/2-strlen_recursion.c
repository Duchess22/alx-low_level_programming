#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
<<<<<<< HEAD

=======
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64

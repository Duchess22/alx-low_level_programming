#include "main.h"
<<<<<<< HEAD

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
=======
/**
* _isalpha - checks for alphabetic character
* @c: The character to be checked
* Return: 1 for alphabetic character or 0 for anything else
*/int
_isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

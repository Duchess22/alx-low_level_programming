#include "main.h"
<<<<<<< HEAD

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The number to be computed.
 * Return: Absolute value of number of zero
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
=======
/**
* _abs - Computes the absolute value of an integer.
* @c: The number to be computed.
* Return: Absolute value of number of zero
*/int
_abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

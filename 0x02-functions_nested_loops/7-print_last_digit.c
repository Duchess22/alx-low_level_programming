#include "main.h"
/**
<<<<<<< HEAD
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
=======
* print_last_digit - Prints the last digit of a number
* @n: The number to be treated
* Return: Value of the last digit of number
*/int
print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

<<<<<<< HEAD
#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
=======
#include <unistd.h>
/**
*_putchar - writes the char c to stdout
*Return: 1 on success
*On error, return -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

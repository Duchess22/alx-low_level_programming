#include "main.h"
#include <stdlib.h>
/**
* get_bit - Returns value of a git at a certain index.
* @n: the unsigned integer.
* @index: the index of the bit.
* Return: return -1 or index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int divisor, check;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
divisor = 1 << index;
check = n & divisor;
if (check == divisor)
return (1);
return (0);
}

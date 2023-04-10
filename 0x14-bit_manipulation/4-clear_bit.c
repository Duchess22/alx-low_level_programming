#include "main.h"
/**
* clear_bit - A function that sets the value of a bit 0 at given index.
* @n: A pointer to the unsigned long int.
* @index: of the bit you want to see starting from 0.
* Return: 1 or -1.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
set = ~(1 << index);
*n = *n & set;
return (1);
}

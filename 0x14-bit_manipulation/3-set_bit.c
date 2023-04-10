#include "main.h"
/**
* set_bit - A function that sets function at index.
* @n: The pointer to a unsigned int.
* @index: The index of the binary operator.
* Return: index or -1.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
int bit;
if (index > 64)
return (-1);
bit = 1 << index;
*n |= bit;
return (1);
}

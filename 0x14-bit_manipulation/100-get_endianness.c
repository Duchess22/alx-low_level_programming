#include "main.h"
/**
* get_endianness - A function that checks the endianness.
* Returns: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int number = 1;
char *x = (char *) &number;
return (*x == 1);
}

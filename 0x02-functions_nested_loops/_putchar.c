#include <unistd.h>
/**
*_putchar - writes the char c to stdout
*Return: 1 on success
*On error, return -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

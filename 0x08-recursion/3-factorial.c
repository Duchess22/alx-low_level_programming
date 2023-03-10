#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{
int x;
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
x = n * factorial(n - 1);
}
return (x);
}
<<<<<<< HEAD

=======
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64

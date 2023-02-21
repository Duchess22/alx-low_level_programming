#include "main.h"
/**
*_isalpha - Entry
*_isalpha - checks for lowercase character
*Return: Always 0
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}

#include <stdio.h>
/**
*main - print the alphabet
*Return: Always 0
*/
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while (c <= 'z')
{
putchar(c);
}
while (d <= 'z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}

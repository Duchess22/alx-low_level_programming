#include "main.h"
#include <stdio.h>
<<<<<<< HEAD

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
=======
/**
* print_array - prints n elements of an array
* @a: array
* @n: number of values to be printed
*/
void print_array(int *a, int n)
{
int t;
for (t = 0; t < n; t++)
{
printf("%d", a[t]);
if (t != n - 1)
printf(", ");
}
printf("\n");
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
}

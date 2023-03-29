#include "main.h"

/**
 * _reverse_array - reverses the array
 * @a: array
 * @n: number of elements
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}


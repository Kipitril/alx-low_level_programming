#include "main.h"

/**
 * print_array - prints array
 *@a: input
 *@n: number of valus
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
}

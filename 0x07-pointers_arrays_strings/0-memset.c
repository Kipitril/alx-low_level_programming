#include "main.h"

/**
 * *_memset - a function that fills memory with const byte
 * @s: address of memory to be filled
 * @b: const byte that fills the memory
 * @n: number of bytes filled with the const b
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	 int j;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}

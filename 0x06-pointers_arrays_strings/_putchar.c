#include <unistd.h>

/**
 * _putchar - writes the character c to std out
 * @c: char to be printed
 * Return: 1 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

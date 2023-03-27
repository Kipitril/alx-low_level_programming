/**
 * _putchar - writes char c to std out
 * @c: char to be printed
 * Return: 0n sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

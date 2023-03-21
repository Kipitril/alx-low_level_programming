#include "main.h"

/**
 * _isalpha - checks for alphabet
 *Return;1 if characte is letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else 
		return (0);
}

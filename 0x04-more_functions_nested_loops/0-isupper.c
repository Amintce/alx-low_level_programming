#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: function parameter
 * Return: 0 and 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

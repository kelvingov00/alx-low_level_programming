#include "main.h"

/**
 * _isupper - check for uppercase character
 *  Description - a function that checks for uppercase character
 *  @c: value to be compared
 *  Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

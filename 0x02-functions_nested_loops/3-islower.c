#include "main.h"
/**
 * _islower - check if a character is lower case
 * @c: character to be verified
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

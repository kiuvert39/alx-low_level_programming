#include "main.h"
/**
 * print_sign - this funtion print the sign of a number
 * @n: character to be verified
 *
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}

#include "main.h"
/**
 * print_alphabet - function that print alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}

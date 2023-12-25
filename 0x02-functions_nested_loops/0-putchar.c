#include "main.h"
/**
 * main - printing using puchar
 *
 * Return: Always 0
 */
int main(void)
{
	char c[10] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

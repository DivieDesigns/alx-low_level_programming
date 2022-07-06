#include "main.h"

/**
 * main - prints "_putchar"
 *
 * Return: 0
 */

int main(void)
{
	char ch[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(ch[i]);
	_putchar('\n');

	return (0);
}

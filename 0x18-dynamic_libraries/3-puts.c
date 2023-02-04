#include "main.h"

/**
 * _puts - Entry point.
 * @str: the variable
 *
 */

void _puts(char *str)
{
	int text;

	for (text = 0; *(str + text) != '\0'; text++)
	{
		_putchar(str[text]);
	}
	_putchar('\n');
}

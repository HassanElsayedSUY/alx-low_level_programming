#include "main.h"

/**
 * _print_rev_recursion - reverse string
 * @s: array of char
 */
void _print_rev_recursion(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	while (c >= 0)
	{
		putchar(s[c]);
		c--;
	}
}

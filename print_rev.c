#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @r: string to print
 *
 * Description: This function prints a string in reverse order.
 * Return: The number of characters printed.
 */
int print_rev(va_list r)
{
	char *st;
	int i, j = 0;

	st = va_arg(r, char *);
	if (st == NULL)
		st = ")llun(";
	for (i = 0; st[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (j);
}

#include "main.h"

/**
 * print_hex - prints an unsigned int in hexadecimal format.
 * @n: unsigned int to be printed
 * @c: case of printing (0 = lowercase, 1 = uppercase)
 *
 * Description: This function prints an unsigned int in hexadecimal format
 *              with the specified case using the _putchar function.
 * Return: The number of characters printed.
 */
int print_hex(unsigned int n, unsigned int c)
{
	unsigned int len, powten, j, digit, num;
	int count = 0;
	char diff;

	if (n != 0)
	{
		num = n;
		len = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 16;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			n -= digit * powten;
			powten /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

/**
 * print_x - takes an unsigned int and prints it in lowercase hexadecimal.
 * @x: unsigned int to print
 *
 * Description: This function prints an unsigned int in lowercase hexadecimal
 *              format using the print_hex function.
 * Return: The number of characters printed.
 */
int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_X - takes an unsigned int and prints it in uppercase hexadecimal.
 * @X: unsigned int to print
 *
 * Description: This function prints an unsigned int in uppercase hexadecimal
 *              format using the print_hex function.
 * Return: The number of characters printed.
 */
int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}

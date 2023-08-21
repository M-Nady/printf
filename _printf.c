#include "main.h"

/**
 * _printf - prints anything
 * @format: the format string
 *
 * return: number of bytes printed
 */
int _printf(const char *format, ...);
{
	int sum = 0;
	va_list ap;
	char *p, *start;
	params_t params = PARAMS_INIT;

	va_start(ap, format);

#include "main.h"

/**
 * _printf - clone of printf function
 * @format: the first parameter
 *
 * Return: number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	int i;
	int n;
	const char *ptr;

	i = 0;
	n = 0;
	ptr = format;
	while (*ptr != '\0')
	{

		if ((*ptr == '%') && (*(ptr + 1) != '%'))
			n++;

		_putchar(*ptr);
		ptr++;
		i++;
	}

	printf("Number of %%: %i\n", n);

	return (i);
}

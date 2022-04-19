#include "main.h"

int countArguments(const char *ptr);

/**
 * _printf - clone of printf function
 * @format: the first parameter
 *
 * Return: number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	int i;
	int arg_count;
	const char *ptr;
	va_list p;

	i = 0;
	arg_count = 0;
	ptr = format;

	arg_count = countArguments(format);

	va_start(p, format);
	i = 0;
	ptr = format;

	while(*ptr != '\0')
	{
		if ((*ptr == '%') && (*(ptr + 1) != '%'))
		{
			if(*(ptr + 1) == 'c')
				{
					char c = va_arg(p, int);
					_putchar(c);
					ptr++;
				}
		}
		else
			_putchar(*ptr);
		ptr++;
		i++;
	}

	printf("Number of %%: %i\n", arg_count);

	return (i);
}

/**
 * countArguments - count number of argumetns passed
 * @ptr: pointer to string
 *
 * Return: number of arguments
 */
int countArguments(const char *ptr)
{
	int arg_count;

	arg_count = 0;
	while (*ptr != '\0')
	{

		if ((*ptr == '%') && (*(ptr + 1) != '%'))
			arg_count++;
		ptr++;
	}

	return (arg_count);
}

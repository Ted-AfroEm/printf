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
	/* int arg_count; */
	int flagSpecifier;
	const char *ptr;
	va_list args;

	i = 0;
	/* arg_count = 0; */
	ptr = format;

	/* arg_count = countArguments(format); */

	va_start(args, format);
	i = 0;
	ptr = format;
	flagSpecifier = 0;

	while (*ptr != '\0')
	{
		if ((*ptr == '%') && (*(ptr + 1) != '%'))
		{
			flagSpecifier = checkSpecifier(ptr, args);
			if (flagSpecifier == 1)
				ptr++;
		}
		/* if two % come condecutively print one %*/
		else if ((*ptr == '%') && (*(ptr + 1) == '%'))
		{
			_putchar(*ptr);
			ptr++;
		}
		else
			_putchar(*ptr);
		ptr++;
		i++;
	}
	va_end(args);
	/* printf("Arguments: %i\n", arg_count); */
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

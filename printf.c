#include "main.h"

int countArguments(const char *ptr);
int checkSpecifier(const char *ptr, va_list p);
void printSingleChar(va_list p);

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
	int flagSpecifier;
	const char *ptr;
	va_list p;

	i = 0;
	arg_count = 0;
	ptr = format;

	arg_count = countArguments(format);

	va_start(p, format);
	i = 0;
	ptr = format;
	flagSpecifier = 0;

	while (*ptr != '\0')
	{
		if ((*ptr == '%') && (*(ptr + 1) != '%'))
		{
			flagSpecifier = checkSpecifier(ptr, p);
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
	printf("Arguments: %i\n", arg_count);
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

/**
 * checkSpecifier - find one of the format specifier
 * @ptr: ptr to string
 * @p: va_list
 *
 * Return: flag 1 for true else 0 for false
 */
int checkSpecifier(const char *ptr, va_list p)
{
	/*_putchar(*ptr);*/
	if (*(ptr + 1) == 'c')
	{
		printSingleChar(p);
		return (1);
	}
	return (0);
}

/**
 * printSingleChar - print a single character
 * @p: va_list
 *
 * Return: nothing
 */
void printSingleChar(va_list p)
{
	char c = va_arg(p, int);

	_putchar(c);
}

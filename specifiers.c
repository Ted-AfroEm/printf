#include "main.h"

/**
 * checkSpecifier - find one of the format specifier
 * @ptr: ptr to string
 * @args: va_list
 *
 * Return: flag 1 for true else 0 for false
 */
int checkSpecifier(const char *ptr, va_list args)
{
	/*_putchar(*ptr);*/
	if (*(ptr + 1) == 'c')
	{
		printSingleChar(args);
		return (1);
	}
	else if (*(ptr + 1) == 's')
	{
		printStringChar(args);
		return (1);
	}
	return (0);
}

/**
 * printSingleChar - print a single character
 * @args: va_list
 *
 * Return: nothing
 */
void printSingleChar(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
}

/**
 * printStringChar - print a string characters
 * @args: va_list
 *
 * Return: nothing
 */
void printStringChar(va_list args)
{
	char *c = va_arg(args, char *);

	while (*c)
	{
		_putchar(*c);
		c++;
	}
}

/**
 * printDecimal - print a decimal number
 * @args: va_list
 *
 * Return: nothing
 */
void printDecimal(va_list args)
{

	int  n = va_arg(args, int);

	print(n);
}

/**
 * printNumber - prints number
 * @n: the number to be printed
 *
 * Return: nothing
 */

void printNumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);

	_putchar(n % 10 + '0');
}

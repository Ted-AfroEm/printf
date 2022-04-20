#include "main.h"

/**
 * checkSpecifier - find one of the format specifier
 * @ptr: ptr to string
 * @args: va_list
 *
 * Return: flag +ve for true else 0 for false
 */
int checkSpecifier(const char *ptr, va_list args)
{
	/*_putchar(*ptr);*/
	if (*(ptr + 1) == 'c')
	{
		printSingleChar(args);
		return (2);
	}
	else if (*(ptr + 1) == 's')
	{
		return (printStringChar(args));
	}
	else if (*(ptr + 1) == 'd')
	{
		return (printDecimal(args));
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
 * Return: length of printed characters
 */
int printStringChar(va_list args)
{
	char *c = va_arg(args, char *);
	int i = 0;

	while (*c)
	{
		_putchar(*c);
		c++;
		i++;
	}
	i++;
	return (i);
}

/**
 * printDecimal - print a decimal number
 * @args: va_list
 *
 * Return: length of printed decimal
 */
int printDecimal(va_list args)
{

	int  n = va_arg(args, int);
	int i = 0;

	return (printNumber(n, i));
}

/**
 * printNumber - prints number
 * @n: the number to be printed
 * @i: the number of printed numbers
 *
 * Return: length of a given number
 */

int printNumber(int n, int i)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		/*i++;*/
	}

	if (n / 10)
	{
		i++;
		printNumber(n / 10, i);
	}
	/* i++; */
	_putchar(n % 10 + '0');
	return (i);
}

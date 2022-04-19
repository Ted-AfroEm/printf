#include "main.h"
#include <sdtarg.h>

int countArguments(const char *ptr);

/**
 * _printf - clone of printf function
 * @format: the first parameter
 *
 * Return: number of characters printed excluding the null byte
 */

int _printf(const char *format, ...)
{
<<<<<<< HEAD
    int length = 0;
	char c;
	char *s;
	int n;

	const char *ptr;
	va_list p;

	ptr = format;


	va_start(p, format);
	ptr = format;
	
	while(*ptr != '\0')
=======
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
>>>>>>> 1bde0fac744e73b01880db16618070f9f1c3e9ae
	{
       
		if ((*ptr == '%') && (*(ptr + 1) != '%'))
<<<<<<< HEAD
		{	

			if(*(ptr + 1) == 'c')
			{
		        c = va_arg(p, int);
				_putchar(c);
				ptr = ptr + 1;
			}
			else if(*(ptr + 1) == 's')
			{
			    int i = 0;
			    s = va_arg(p, char *);

			    while(s[i] != '\0')
			        _putchar(s[i++]);
			    
			    ptr = ptr + 1;
			    length += i - 1;
			}

		}
		else
		    _putchar(*ptr);
		    
		ptr++;
		length++;
	}



	return (length);
=======
			arg_count++;
		ptr++;
	}

	return (arg_count);
>>>>>>> 1bde0fac744e73b01880db16618070f9f1c3e9ae
}



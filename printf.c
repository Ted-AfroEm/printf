#include "main.h"
#include <sdtarg.h>

/**
 * _printf - clone of printf function
 * @format: the first parameter
 *
 * Return: number of characters printed excluding the null byte
 */

int _printf(const char *format, ...)
{
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
	{
       
		if ((*ptr == '%') && (*(ptr + 1) != '%'))
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
}



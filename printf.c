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
	int arg_count;
	const char *ptr;
	va_list p;

	i = 0;
	arg_count = 0;
	ptr = format;
	while (*ptr != '\0')
	{

		if ((*ptr == '%') && (*(ptr + 1) != '%'))
			arg_count++;

		/*_putchar(*ptr);*/
		ptr++;
		i++;
	}

	va_start(p, format);
	i = 0;
	ptr = format;
	
	while(*ptr != '\0')
	{

		if ((*ptr == '%') && (*(ptr + 1) != '%'))
		{	
			/*printf("%c", *(ptr+1));*/
			if(*(ptr + 1) == 'c')
			{
				/*printf("here2\n");*/
				while(i < arg_count)
				{
					char c = va_arg(p, int);
					_putchar(c);
					/*printf("here3\n");*/
					ptr = ptr + 2;
					i++;
				}
			}
		}
		_putchar(*ptr);
		ptr++;
	}

	printf("Number of %%: %i\n", arg_count);

	return (i);
}

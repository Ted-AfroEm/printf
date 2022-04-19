#include "main.h"


int main(void)
{
	char sign1 = '$';
	char sign2 = '#';
	char *str = "using";
	
	_printf("Using _printf --------------\n");	
	_printf("First test\n");
	_printf("This is %c\n");
	_printf("print char %c \n", sign1);
	_printf("print char %c- and %c-\n", sign1, sign2);
	_printf("print char %%%c and %c\n", sign1, sign2);
	_printf("print str %s printf\n", str);
	_printf("print str %s printf %c \n", str, sign1);
	printf("Using printf ----------------\n");
	/*printf("This is %c\n");*/
	printf("print char %c \n", sign1);
	printf("print char %c- and %c-\n", sign1, sign2);
	printf("print char %%%c and %c\n", sign1, sign2);
        printf("print str %s printf\n", str);
	printf("print str %s printf %c \n", str, sign1);
	return(0);
}

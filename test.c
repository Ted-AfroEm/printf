#include "main.h"


int main(void)
{
	char sign1 = '$';
	char sign2 = '#';
		
	_printf("First test\n");
	_printf("This is %c\n");
	_printf("print char %c \n", sign1);
	_printf("print char %c- and %c-\n", sign1, sign2);
	_printf("print char %%%c and %c\n", sign1, sign2);
	printf("First test\n");
	/*printf("This is %c\n");*/
	printf("print char %c \n", sign1);
	printf("print char %c- and %c-\n", sign1, sign2);
	printf("print char %%%c and %c\n", sign1, sign2);
	return(0);
}

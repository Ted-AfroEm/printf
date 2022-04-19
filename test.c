<<<<<<< HEAD
=======
#include <limits.h>
#include <stdio.h>
>>>>>>> 1bde0fac744e73b01880db16618070f9f1c3e9ae
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
<<<<<<< HEAD

int main(void)
{
    	char a = 'a';
    	char b = 'b';
    	char c = 'c';
    
    	int integer = 345;
    	char s[] = "hello";
    	char d[] = "another word";
    
   	 _printf("first: %c, second: %c, third: %s, fourth: %s\n", a, b, s, d);
  
	return(0);
=======
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    /* printf("Unknown:[%r]\n");*/
    return (0);
>>>>>>> 1bde0fac744e73b01880db16618070f9f1c3e9ae
}

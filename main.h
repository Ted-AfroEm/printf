#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int checkSpecifier(const char *ptr, va_list args);
void printSingleChar(va_list args);
int printStringChar(va_list args);
int printDecimal(va_list args);
int printNumber(int n, int i);


#endif


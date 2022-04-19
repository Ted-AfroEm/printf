#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int checkSpecifier(const char *ptr, va_list args);
void printSingleChar(va_list args);
void printStringChar(va_list args);
void printDecimal(va_list args);
void printNumber(int n);


#endif


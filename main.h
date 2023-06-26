#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


int _printf(const char *format, ...);
int _putchar(char c);
void print_number(int num);
void print_char(va_list args);
void print_str(va_list args);
void print_nums(va_list args);
void print_x(int count);
#endif /* MAIN_H */

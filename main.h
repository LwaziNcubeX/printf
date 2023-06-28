#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int num);
int print_str(va_list args);
void print_nums(va_list args);
void print_x(int count);
void print_bin(va_list args);
void print_binary(unsigned int num);
void print_hexidecimal(unsigned int num, bool is_lowercase);
void print_octal(unsigned int num);
void print_hex(va_list args);
void print_hdec(va_list args);
void print_oct(va_list args);
void print_unsigned_num(unsigned int num);
void print_unum(va_list args);
void print_addr(va_list args);
void print_address(void *p);
int print_args(char specif, va_list args);
int print_args2(char specif, va_list args);

#define buffer 1024
#endif /* MAIN_H */

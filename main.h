#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
typedef int (*func_p)(va_list);
func_p func_pick(char *s);
int _printf(const char *format, ...);
int _putchar(char);
int _puts(char *);
int _strlen(char *);
int _const_strlen(const char *);

int print_str(va_list ap);
int print_char(va_list ap);
int print_per(va_list ap);

int print_int(va_list ap);
void print_number(int n);
int count_digit(int i);
char *convert(unsigned int num, int base, int is_negative);

typedef struct func_struct
{
	char *s;
	func_p func;
} func_struct;
#endif

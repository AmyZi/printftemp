#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

typedef int (*func_p)(va_list);
typedef int (*func_p_with_flags)(va_list);

func_p func_pick(char *s);
/* FUCTIONS FOR CHAR */

int _printf(const char *format, ...);
int _putchar(char);
int _puts(char *);
int _strlen(char *);
int _const_strlen(const char *);

int print_str(va_list ap);
int print_char(va_list ap);
int print_per(va_list ap);
/* FUNCTIONS TO PRINT NUM */
int print_int(va_list ap);
void print_number(int n);
int count_digit(int i);
char *convert(unsigned int num, int base, int is_negative);
int print_binary(va_list ap);
int print_hex_big(va_list ap);
int print_hex(va_list ap);
int print_octal(va_list ap);
int print_unsigned(va_list ap);

int print_rot13(va_list ap);
int print_rev(va_list ap);
int print_bigS(va_list ap);
int print_address(va_list ap);
int print_hex_number(unsigned long int num, char *hex_digits);
typedef struct func_struct
{
	char *s;
	func_p func;
} func_struct;
#endif

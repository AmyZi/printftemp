#include "main.h"
/**
*print_address - prints pointer address
*@ap: argument
*Return: address
*/

int print_address(va_list ap)
{
void *address = va_arg(ap, void *);
unsigned long int address_val = (unsigned long int)address;

_puts("0x");
return (print_hex_number(address_val, "0123456789abcdef"));
}

/**
*print_hex_number- prints hex of number
*@num: number
*@hex_digits: num to convert
*Return: pointer to hex
*/
int print_hex_number(unsigned long int num, char *hex_digits)
{
unsigned long int quotient = num;
int length = 0;
char buffer[BUFFER_SIZE];

if (num == 0)
return (_putchar('0'));

while (quotient > 0)
{
buffer[length] = hex_digits[quotient % 16];
quotient /= 16;
length++;
}
int i;
for (int i = length - 1; i >= 0; i--)
_putchar(buffer[i]);

return (length);
}
/**
* print_hex_big - Print a number in hexadecimal base, in uppercase.
* @ap: va_list arguments from _printf.
* Return: The number of characters printed.
*/
int print_hex_big(va_list ap)
{
unsigned int num = va_arg(ap, unsigned int);
char *str = convert(num, 16, 0);
int count = 0;

count += _puts(str);
return (count);
}

/**
* print_unsigned - Print an unsigned integer.
* @ap: va_list arguments from _printf.
* Return: The number of characters printed.
*/
int print_unsigned(va_list ap)
{
unsigned int num = va_arg(ap, unsigned int);
char *str = convert(num, 10, 0);

return (_puts(str));
}
/**
* print_hex - Print a number in hexadecimal base, in lowercase.
* @ap: va_list arguments from _printf.
* Return: The number of characters printed.
*/
int print_hex(va_list ap)
{
unsigned int num = va_arg(ap, unsigned int);
char *str = convert(num, 16, 1);
int count = 0;

count += _puts(str);
return (count);
}


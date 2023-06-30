#include "main.h"
/**
* convert - Convert number to a specified base.
* @num: Number to convert.
* @base: Base to convert the number to.
* @is_negative: Flag indicating if the number is negative.
*
* Return: Pointer to the converted number.
*/
char *convert(unsigned int num, int base, int is_negative)
{
static char buffer[20]; /* Assuming 20 characters is sufficient */
char *ptr = &buffer[19];
*ptr = '\0';

do {
/* For hexadecimal, convert the remainder to the corresponding hex character */
if (base == 16)
{
*(--ptr) = "0123456789ABCDEF"[num % base];
}
else
{
*(--ptr) = '0' + (num % base);
}
num /= base;
} while (num != 0);

if (is_negative)
{
*(--ptr) = '-';
}

return (ptr);
}

/**
* print_octal - Print a number in base 8.
* @ap: va_list arguments from _printf.
*
* Description: The function calls convert() which in turn converts the input
* number into the correct base and returns it as a string.
*
* Return: The number of characters printed.
*/
int print_octal(va_list ap)
{
unsigned int num = va_arg(ap, unsigned int);
char *str = convert(num, 8, 0);
int count = 0;

count += _puts(str);
return (count);
}


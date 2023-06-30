#include "main.h"
/**
*print_str - this function prints a string
*@ap: va_list argument
*Return: num of printed character
*/


int print_str(va_list ap)
{
char *s = va_arg(ap, char *);
int retval = _puts(s);
return (retval);
}
/**
*print_char - this function prints a char
*@ap: va_list argument
*Return: num of printed character
*/
int print_char(va_list ap)
{
char c = va_arg(ap, int);
return (_putchar(c));
}
/**
* print_per - Prints a percent char
*@ap: va_list
*Return: num of printed character
*/
int print_per(va_list ap)
{
(void) ap;
return (_putchar('%'));
}

#include "main.h"
/**
* print_bigS - Non printable characters
* (0 < ASCII value < 32 or >= 127) are
* printed this way: \x, followed by the ASCII code
* value in hexadecimal (upper case - always 2 characters)
* @ap: va_list arguments from _printf
* Return: number of characters printed
*/
int print_bigS(va_list ap)
{
int i, count = 0;
char *res;
char *s = va_arg(ap, char *);

if (!s)
return (_puts("(null)"));

for (i = 0; s[i]; i++)
{
if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
{
_puts("\\x");
count += 2;
res = convert(s[i], 16, 0);
if (!res[1])
count += _putchar('0');
count += _puts(res);
}
else
count += _putchar(s[i]);
}
return (count);
}

/**
* print_rev - prints a string in reverse
* @ap: argument from _printf
* Return: length of the printed string
*/
int print_rev(va_list ap)
{
int i = 0, j;
char *s = va_arg(ap, char *);

if (!s)
s = "(null)";

while (s[i])
i++;

for (j = i - 1; j >= 0; j--)
_putchar(s[j]);

return (i);
}

/**
* print_rot13 - prints a string using rot13
* @ap: list of arguments from _printf
* Return: length of the printed string
*/
int print_rot13(va_list ap)
{
int i, j;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *s = va_arg(ap, char *);

for (j = 0; s[j]; j++)
{
if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
_putchar(s[j]);
else
{
for (i = 0; i <= 52; i++)
{
if (s[j] == rot13[i])
_putchar(ROT13[i]);
}
}
}

return (j);
}


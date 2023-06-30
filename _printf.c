#include "main.h"
/**
  *_printf - This is a custom printf function
  *@format: pointer to string
  *Return: string
  */

int _printf(const char *format, ...)
{
const char *p;
int count = 0;

va_list arguments;

va_start(arguments, format);

for (p = format; *p; p++)
{
if (*p == '%')
{
p++;
if (*p == '%')
{
count += _putchar('%');
continue;
}
func_p pfunc = func_pick((char *)p);
if (pfunc != NULL)
{
count += pfunc(arguments);
}
else
{
count += _putchar('%');
count += _putchar(*p);
}
}
else
{
count += _putchar(*p);
}
}

va_end(arguments);

return (count);
}

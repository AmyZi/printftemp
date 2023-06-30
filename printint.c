#include "main.h"

/**
   * print_int - prints an integer
    * @ap: va_list of arguments from _printf
     * Return: number of char printed
      */
int print_int(va_list ap)
{
		int n = va_arg(ap, int);
			int res = count_digit(n);

				if (n <= 0)
							res++;
					print_number(n);
						return (res);
}

/**
   * print_number - helper function that loops through
    * an integer and prints all its digits
     * @n: integer to be printed
      */
void print_number(int n)
{
		unsigned int n1;

			if (n < 0)
					{
								_putchar('-');
										n1 = -n;
											}
				else
							n1 = n;

					if (n1 / 10)
								print_number(n1 / 10);
						_putchar((n1 % 10) + '0');
}

/**
   * count_digit - returns the number of digits in an integer
    * for _printf
     * @i: integer to evaluate
      * Return: number of digits
       */
int count_digit(int i)
{
		unsigned int d = 0;
			unsigned int u;

				if (i < 0)
							u = i * -1;
					else
								u = i;
						while (u != 0)
								{
											u /= 10;
													d++;
														}
							return (d);
}
char *convert(unsigned int num, int base, int is_negative)
{
	    static char buffer[20]; // Assuming 20 characters is sufficient
	        char *ptr = &buffer[19];
		    *ptr = '\0';

		        do
				    {
					            // For hexadecimal, convert the remainder to the corresponding hex character
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

			    return ptr;
}

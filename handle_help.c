#include "main.h"
/**
  *_putchar - This function prints a char
  *@c: char to print
  *Return: 1
  */
int _putchar (char c)
{
	char *ptr = &c;

	write(1, ptr, 1);
	return (1);
}
/**
  *_puts - This function prints a string
  *@s: strin to print
  *Return: string
  */
int _puts(char *s)
{
	int i, retval = 0;

	for (i = 0, retval = 0; s[i] != '\0'; i++)
	{
		retval += _putchar(s[i]);
	}
	return (retval);
}
/**
  *_strlen - This function checks for the len of string
  *@s: string
  *Return: number of string
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

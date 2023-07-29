#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * printmystrwrite - prints strings using putchar
 * @str: an input variable to  print the string
 * Return: a printed string
*/

int printmystrwrite(char str[])
{
	int j = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		write(1, &str[j], 1);
	}
	return (j);
}
/**
 * printmycharwrite - function prints a char using write
 * @charro: input variable
 * Return: a char printed
*/
int printmycharwrite(char charro)
{
		write(1, &charro, 1);

	return (1);
}
/**
 * _printf - function which prints a string without format specs
 * @format: input variable to print a string
 * Return: the number of characters printed excluding    the nulls
*/

int _printf(const char *format, ...)
{
	va_list args;

	int counteras = 0, i = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	for (i = 0 ; *(format + i) != '\0' ; i++)
	{
		if (format[i] == '%' && (format[i + 1] == 'd' || (format[i + 1] == 'i')))
		{
			counteras += print_number(va_arg(args, int));
			i = i + 1;
		}
		else if (format[i] == '%' && (format[i + 1] == 'b'))
		{
			counteras += print_binary(va_arg(args, int));
			i = i + 1;
		}
		else if (format[i] == '%' && (format[i + 1] == 's'))
			{
			counteras += printmystrwrite(va_arg(args, char *));
			i = i + 1;
		}
		else if (format[i] == '%' && (format[i + 1] == 'c'))
		{
			counteras += printmycharwrite(va_arg(args, int));
			i = i + 1;
		}
		else if (format[i] == '%' && (format[i + 1] == '%'))
		{
			counteras += printmycharwrite('%');
			i = i + 1;
		}
		else
			counteras += printmycharwrite(format[i]);
	}
	va_end(args);
	return (counteras);
}

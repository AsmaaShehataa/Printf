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

	int i;
	int counteras = 0;
	int strcounter;


	if (!format)
		return (-1);

	va_start(args, format);

	for (i = 0 ; *(format + i) != '\0' ; i++)
	{

		if (format[i] == '%' && (format[i + 1] == 's'))
			{
			/* (va_arg(args, char *));*/
			i = i + 1; /* to print the character after % */
			strcounter = printmystrwrite(va_arg(args, char *));

			counteras += strcounter; /* measure string count */
		}
		else if (format[i] == '%' && (format[i + 1] == 'c'))
		{
			printmycharwrite(va_arg(args, int));
				/* putchar(va_arg(args, int)); */
			i = i + 1;
			counteras++;
		}
		else if (format[i] == '%' && (format[i + 1] == '%'))
		{
			printmycharwrite('%');
			i = i + 1;
			counteras++;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd'))
		{
			int num = va_arg(args, int);
			char *iToa = convertnumbertocharz(num);

			i = i + 1; /* to print the character after % */
			strcounter = printmystrwrite(iToa);
			counteras += strcounter; /* measure string count */
		}
		else if (format[i] == '%' && (format[i + 1] == 'i'))
		{
			int num = va_arg(args, int);
			char *iToa = convertnumbertocharz(num);

			i = i + 1; /* to print the character after % */
			strcounter = printmystrwrite(iToa);
			counteras += strcounter; /* measure string count */
		}

		else
		{
			printmycharwrite(format[i]);
			counteras++;
		}

	}
	va_end(args);
	return (counteras);
}

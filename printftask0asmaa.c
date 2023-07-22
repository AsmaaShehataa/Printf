#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * printmystr - function prints strings using putchar instead of printing 1 char
 * @str: an input variable to  print the string
 * Return: a printed string
*/

int printmystrwrite(char str[]) 
{
	int j = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		write(1,&str[j],1);
	}
	return (j);
}

/**
 * printmychar - 
 * @c: input variable that will be tested for chars
*/
int printmycharwrite(char charro)  
{
		write(1,&charro,1);

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
	//char *res;

	va_start(args, format);

	for (i=0 ; *(format+i)!= '\0' ; i++) 
	{
		//res = var_arg(args, char);
		if (format[i] == '%' && (format[i + 1] == 's'))
		{
			 // (va_arg(args, char *));
			i = i + 1; /* to print the character after % */
			strcounter = printmystrwrite(va_arg(args, char *));

			counteras += strcounter;  
		}
		else if ( format[i] == '%' &&(format[i + 1] == 'c'))
		{
			printmycharwrite(va_arg(args, int));
			//putchar(va_arg(args, int));
			i = i + 1;
			counteras++;
		}
		else if (format[i] == '%' &&(format[i + 1] == '%'))
		{
			//putchar('%');
			printmycharwrite('%');
			i = i + 1;
			counteras++;
		}
		
		else
		{
			printmycharwrite(format[i]); 
			//putchar(format[i]);
			counteras++;
		}

	}
	va_end(args);
	return (counteras);
}

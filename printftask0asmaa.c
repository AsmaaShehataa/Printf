#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

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
 * convertdigit - convert digits to letter
 * @x: number will be converted to a char
 * Return: char converted (0) on Success

*/
char convertdigit(int x)
{

	switch (x)
	{
		case 0:
			return ('0');
		case 1:
			return ('1');
		case 2:
			return ('2');
		case 3:
			return ('3');
		case 4:
			return ('4');
		case 5:
			return ('5');
		case 6:
			return ('6');
		case 7:
			return ('7');
		case 8:
			return ('8');
		case 9:
			return ('9');
		default:
		return('x');
	}
}

/**
 * mynumlen - measuring the length of the number converted from char to digit
 * @num1: input variable
 * Return: length of the number
*/

int mynumlen(int num1)
{
	int count = 1;
	int i = 10;

	
	if ( num1 / 10 == 0)
		return 1;
	if ( num1 / 100 == 0)
		return 2;
	if ( num1 / 1000 == 0)
		return 3;
	if (num1 / 10000 == 0)
		return 4; 
	if (num1 / 100000 == 0)
		return 5;

	while ((num1 / i) != 0 )
	{
		i = i * 10;

		count++;
	}
	return (count);
}
/**
 * convertnumbertocharz - converting number to char
 * @number1: the variable will be converted to a char
 * Return: array of chars
*/


char* convertnumbertocharz(int number1)
{

	int i = mynumlen(number1);
	printf("numnber lenght is %d\n", i);
	char *a;
	a = (char*)malloc(sizeof(char) * (i));
	int digit = 0;

	int k = i -1;
	do
	{
		digit = number1 % 10; //
		printf("numnber digit is %d\n", digit);
		char mycharz = convertdigit(digit);
		printf("this is my charr %c\n", mycharz);
		number1 = number1 / 10; 
		printf("numnber is %d\n", number1);
		a[k] = mycharz;  /* charr array after completion - should = the function in line 34 to convert number to char */
		printf("this is a of I %c\n", a[k]);
		k--;
		printf("-------------------------------------");
	}
	while (number1 != 0 );

	printf( "this is a %s\n", a);
	return(a); 
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

			counteras += strcounter;
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
		else if ( format[i] == '%' &&(format[i + 1] == 'd'))
		{
			printmycharwrite(va_arg(args, int));
			//putchar(va_arg(args, int));
			i = i + 1;
			counteras++;
		}
		else if ( format[i] == '%' &&(format[i + 1] == 'i'))
		{
			printmycharwrite(va_arg(args, int));
			//putchar(va_arg(args, int));
			i = i + 1;
			counteras++;
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

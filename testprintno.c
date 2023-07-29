#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: the integer
 */
int print_number(int n)
{
	unsigned int num;


	if (n < 0)
	{
		num = -n;
		printmycharwrite('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	printmycharwrite((num % 10) + '0');
	return (mynumlen(n));
}

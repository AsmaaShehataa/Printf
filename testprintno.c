#include "main.h"

/**
 * mynumlen - function that measures the char of arrays length
 * @num1: input variable
 * Return: a char of array
*/

int mynumlen(int num1)
{
	int count = 0;

	if (num1 < 0)
		count++; /* Handle - sign */

	do {
		num1 = num1 / 10;
		count++;
	} while (num1 != 0);
	return (count);

}
/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: return n
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

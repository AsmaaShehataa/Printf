#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
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
/**
 * print_binary - prints number in binary
 * @n: integer to be printed
 * Return: the binary number
 */
// int print_binary(unsigned int n)
// {
// 	// unsigned int num;

// 	// if (n < 0)
// 	// {
// 	// 	num = -n;
// 	// 	printmycharwrite('-');
// 	// }
// 	// else
// 	// {
// 	// 	num = n;
// 	// }
// 	// if (num / 2)
// 	// {
// 	// 	print_binary(num / 2);
// 	// }
// 	// printmycharwrite((num % 2) + '0');
// 	 //return (my_bin_len(n));
// 	 return (3);
// }
/**
 * my_bin_len - prints the len of the bin number
 * @num1: integer to be printed
 * Return: the len binary number
 */

// int my_bin_len(unsigned int num1)
// {
// 	int count = 0;

// 	if (num1 < 0)
// 		count++; /* Handle - sign */

// 	do {
// 		num1 = num1 / 2;
// 		count++;
// 	} while (num1 != 0);
// 	return (count);

// }

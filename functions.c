
#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * convertdigit - convert digits to char
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
		return ('x');
	}
}
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
 * convertnumbertocharz - converting number to char
 * @number1: the variable will be converted to a char
 * Return: array of chars
 */

char *convertnumbertocharz(int number1)
{
	char mycharz;
	int digit;
	/*int isnegative;  handle the -ve numbers in the charr array */
	int i = mynumlen(number1);

	int k = i - 1;

	/* printf("numnber lenght is %d\n", i); */
	char *a;

	if (number1 < 0)
	{
		a = (char *)malloc(sizeof(char) * (i + 1));
		a[0] = '-';
/* if it is a -ve value by this cond will */
/*put a '-' sign in the beg of the arr */
		k = i;					/* placeholder for the '-' sign */
		number1 = number1 * -1; /* -ve values are handled */
	}
	else
		a = (char *)malloc(sizeof(char) * (i));

	digit = 0;

	do {
		digit = number1 % 10; /* return -ve or +ve numbers */

		/* printf("numnber digit is %d\n", digit); */
		mycharz = convertdigit(digit);
		/* printf("this is my charr %c\n", mycharz); */
		number1 = number1 / 10;
		/* printf("numnber is %d\n", number1); */
		a[k] = mycharz;
/* charr array after completion - should */
/*= the function in line 34 to convert number to char */
		/* printf("this is a of I %c\n", a[k]); */
		k--;
	} while (number1 != 0);
	return (a);
	free(a);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h> 

/**
 * convTObin - convert unsigned integer to binary
 * @num: the unsigned int to convert
 * Return: unsigned int converted binary number
*/

char *convTobin(unsigned int x)
{
	int sizeas;
	char *mybin;

	sizeas = sizeof(x) * CHAR_BIT;
	mybin = (char *)malloc(sizeas + 1);

if (mybin == NULL) 
	return (-1); /* malloc failed, return error code */

	for (int i = sizeas -1; i >= 0; i--)
	{
		mybin[sizeas - 1 - i] = '0'+ ((x >> i) & 1);
	}
	mybin[sizeas] = '/0';
	return (mybin);
}

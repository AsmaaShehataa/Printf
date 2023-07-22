#include <limits.h>
#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char name[] = "Asmaa";
	char g = 'A';

	// const char data[] = "Hello, this is a message written to stdout.\n";
    // int dataSize = sizeof(data) - 1; // Exclude the null terminator from the size
	// write(1, data, dataSize);

	//printmystrwrite("Hello Asmaa\n");
	int p1 = _printf("Hello world\n");
	int prtf = printf("Hello world\n");
	int chkptf = printf("%d , %d", p1, prtf);

	int x = _printf( "Hello world %s\n", name);
	int y = printf("Hello world %s\n", name);
	int z = _printf( "Hi this asmaa %c\n", g);
	int num1 = printf( "Hi this asmaa %c\n", g);
	int num2 = _printf("new season is on %%\n");
	int num3 = printf("new season is on %%\n");

	int chkptf1 = printf("%d , %d\n", x, y);

	int checkptf2 = printf("%d : %d\n", z, num1);

	int checkptf3 = printf("%d : %d\n", num2, num3);

	
	// _printf("my name is %s\n", name);
	// _printf("my grade is  %c\n", g);
	// _printf("my grade%% is %%\n");
	return (0);
}

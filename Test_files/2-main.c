#include "main.h"
#include <stdio.h>

int main() {
    char name[] = "John";
    char g = 'A';

    //int x = _printf("Hello world %s\n", name);
   // int y = printf("Hello world %s\n", name);
   // int z = _printf("Hi this asmaa %c\n", g);
    //int num1 = printf("Hi this asmaa %c\n", g);

   printf("new season %s %c is on %%\n", name, g);
    _printf("new season %s %c is on %%\n", name, g);
	 

	//int check22  = printf("new char is %c %%\n", z);
	//int check23  = printf("new char is %c n %%\n", z);

	//int check2  = printf("new season is on %%\n", y);
	//int check2  = printf("new season is on %%\n", y);
	//int check2  = printf("new season is on %%\n", num1);
	//int check2  = printf("new season is on %%\n", num1);



    // If you don't use checkptf3, checkptf2, and chkptf1, you can simply remove them.

    return 0;
}

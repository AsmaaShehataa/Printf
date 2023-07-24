#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>


int main()
{
    int a, b, c;
 
    printf("Enter value of a in decimal format:");
    scanf("%d", &a);
 
    printf("Enter value of b in octal format: ");
    scanf("%i", &b);
 
    printf("Enter value of c in hexadecimal format: ");
    scanf("%i", &c);
 
    printf("a = %d\n, b = %i\n, c = %i\n", a, b, c);
	_printf("a = %d\n, b = %i\n, c = %i\n", a, b, c);
 

    return 0;
    
}

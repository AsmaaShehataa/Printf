#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#define S_LONG 2
#define S_SHORT 1

int _printf(const char *format, ...);
int printmystrwrite(char str[]);
int printmycharwrite(char charro);
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int my_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
char convertdigit(int x);
int printROT13(va_list args);
int we_port(char);
int our_hexa_code(char, char[], int);
int num_digit(char);
int printhexadici(va_list args);

long int size_num(long int num, int size);
long int size_unsgnd(unsigned long int num, int size);
int mynumlen(int num1);
char *convertnumbertocharz(int number1);
void print_number(int n);

#endif

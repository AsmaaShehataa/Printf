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
char convertdigit(int x);
int mynumlen(int num1);
char *convertnumbertocharz(int number1);
void print_number(int n);

#endif

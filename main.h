#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int printmystrwrite(char str[]);
int printmycharwrite(char charro);
char convertdigit(int x);
int mynumlen(int num1);
char *convertnumbertocharz(int number1);
void print_number(int n);
int myprint(char c);

#endif

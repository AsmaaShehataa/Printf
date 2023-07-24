#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printmystrwrite(char str[]);
int printmycharwrite(char charro);
char convertdigit(int x);
int mynumlen(int num1);
char *convertnumbertocharz(int number1);

#endif

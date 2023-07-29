#include "main.h"
#include <unistd.h>

/**
 * myprint - handle the character buffer to stdout.
 * @c: The input variable
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: print_int uses a local buffer of 1024 to call write
 * as little as possible
 */
int myprint(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
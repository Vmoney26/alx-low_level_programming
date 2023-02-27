#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * REturn: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1)):
}

#include <stdio.h>
#include "main.h"
/**
 * main -prints name of prog
 * @argc:no of arguments
 * @argv:array
 * Return:0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

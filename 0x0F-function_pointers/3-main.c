#include "3-calc.h"
/**
 * main-simple operations
 * @argc:no of arguments
 * @argv:array
 * Return:0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char k;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	k = *argv[2];

	if ((k == '/' || k == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}

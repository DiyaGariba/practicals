#include <stdio.h>

/**
 * main - change value in address
 *
 * Return: 0
 */

int main(void)
{
	int x = 10;
	int *ptr = &x;

	*ptr = 4;
	printf("%d\n", *ptr);
}

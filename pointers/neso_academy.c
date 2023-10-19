#include <stdio.h>

/**
 * main - printing the value of operator
 *
 * Return: 0
 */

int main(void)
{
	int x = 5;
	int *ptr;

	ptr = &x;

	printf("%d", *ptr);
}

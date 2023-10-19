#include <stdio.h>

/**
 * main - 2 pointers to one variable
 *
 * Return: 0
 */

int main(void)
{
	int i = 10;
	int *p, *q;

	{
		p = &i;
		q = p;
		printf("%d\n%d\n", *p, *q);
	}
}

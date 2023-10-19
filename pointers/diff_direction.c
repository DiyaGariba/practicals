#include <stdio.h>

/**
 * main - different pointers to different variables
 *
 * Return: 0
 */

int main(void)
{
	int i = 10, j = 20;
	int *p, *q;

	{
		p = &i;
		q = &j;
		printf("%d %d\n", i, j);
	}
}


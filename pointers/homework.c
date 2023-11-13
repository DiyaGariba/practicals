#include <stdio.h>

/**
 * main - predicting output
 *
 * Return: 0
 */

int main(void)
{
	int j = 1;
	int *p = &j;

	{
		q = p;
		*q = 5;
		printf("%d\n", *p);
	}
}

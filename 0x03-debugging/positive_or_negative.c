#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - prints the positive result
 * @i: prints the parameter
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}

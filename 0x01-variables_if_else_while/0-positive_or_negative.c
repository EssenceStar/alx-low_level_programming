#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether it is positive, negetive
 *        or zero
 *
 *        Return: Always 0.
 */
int main(viod)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negetive\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main-Entry point
 * Decription:a programme that prints random number for the variable n,
 * anytime its executetd
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
		/*
		 * If the number is greater than 0 its positive
		 * it the number is 0 its zero
		 * it the number is less than zero its negative
		 */
		if (n > 0)
			printf("%d is positive\n", n);
		else if (n == 0)
			printf("%d is zero\n", n);
		else if (n < 0)
			printf("%d is negative\n", n);
		return (0);
}

/* The factorial of an integer n, written n!, is the product of the
 * consecutive integers 1 through n. Write a program to generate and
 * print a table of the first 10 factorials. */

#include <stdio.h>
main()
{
	int n, fact;

	fact = 1;

	for (n = 1; n <= 10; ++n) {
		fact = fact * n;
		printf("factorial of %d is %d.\n", n, fact);
	}
	return 0;
}

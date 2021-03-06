/* A triangular number generated by the formula
 * triangularNumber = n(n + 1) / 2. Write a program that generates
 * a table of triangular numbers using the preceding formula.
 * Have the program generate every fifth triangular number between
 * 5 and 50. */

#include <stdio.h>
main()
{
	int num, n;

	for (n = 1; n <= 50; ++n) {
		num = n * (n + 1) / 2;
		while (n % 5 == 0) {
			printf("%d\n", num);
			n += 1;
		}
//		printf("\n");
	}
	return 0;
}

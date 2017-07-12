/* Write a program to generate and display a table of n and n^2, for
 * integer values of n ranging from 1 to 10. Be certain to print
 * appropriate column headings. */

#include <stdio.h>
main()
{
	int n;
	printf("n\tn^2\n");
	for (n = 1; n <= 10; ++n) {
		printf("%d\t%d\n", n, n * n);
	}
	return 0;
}

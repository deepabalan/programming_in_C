// Generating a table of triangular numbers

#include <stdio.h>
main()
{
	int i, num = 0;

	for (i = 1; i <= 15; ++i) {
		num += i;
		printf("%-2d%6d\n", i, num);
	}
	return 0;
}

// Program to generate a table of prime numbers.

#include <stdio.h>
main()
{
	int i, j, isprime;

	for (i = 2; i <= 50; ++i) {
		isprime = 1;
		for (j = 2; j < i; ++j)
			if (i % j == 0)
				isprime = 0;
			if (isprime != 0)
				printf("%d ", i);
	}
	printf("\n");
	return 0;
}

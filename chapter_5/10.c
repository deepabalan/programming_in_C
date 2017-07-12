// revised version of reversing digits using do while loop.

#include <stdio.h>
main()
{
	int num, rem;

	printf("Enter your number: ");
	scanf("%d", &num);

	do {
		rem = num % 10;
		printf("%d", rem);
		num = num / 10;
	} while (num != 0);
	printf("\n");
	return 0;
}

/* Write a program that reverses digits. Check the negative numbers are
 * correctly handled. If the number -8645 is typed in, the output of
 * the program should be 5468-. */

#include <stdio.h>
main()
{
	int digit, rem;
	printf("Enter your number: ");
	scanf("%d", &digit);
	if (digit < 0) {
		digit = digit * -1;
		do {
			rem = digit % 10;
			printf("%d", rem);
			digit = digit / 10;
		} while (digit != 0);
		printf("-\n");
	} else if (digit > 0) {
		do {
			rem = digit % 10;
			printf("%d", rem);
			digit = digit / 10;
		} while (digit != 0);
		printf("\n");
	}
	return 0;
}

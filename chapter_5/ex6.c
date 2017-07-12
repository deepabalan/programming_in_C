/* Write a program that calculates the sum of the digits of an
 * integer. */

#include <stdio.h>
main()
{
	int sum = 0, num, rem;

	printf("Enter your number: ");
	scanf("%d", &num);

	do {
		rem = num % 10;
		sum += rem;
		num /= 10;
	} while (num != 0);
	printf("%d\n", sum);

	return 0;
}

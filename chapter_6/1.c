/* Program to calculate the absolute value of an integer. */


#include <stdio.h>
main()
{
	int num;

	printf("Enter your number: ");
	scanf("%d", &num);

	if (num < 0)
		num = -num;
	printf("absolute number is %d\n", num);

	return 0;
}

/* Write a program that asks the user to type in two integer values at
 * the terminal. Test these two numbers to determine if the first is
 * evenly divisible by the second, and then display an appropriate
 * message at the terminal. */

#include <stdio.h>
main()
{
	int a, b;

	printf("Enter value of a: ");
	scanf("%d", &a);

	printf("Enter value of b: ");
	scanf("%d", &b);

	if (a % b == 0)
		printf("first value is evenly divisible by second.\n");
	else
		printf("first value not divisible by second.\n");
	return 0;
}

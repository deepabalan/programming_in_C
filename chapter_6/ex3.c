/* Write a program that accepts two integer values typed in by the
 * user. Display the result of dividing the first integer by the
 * second, to three-decimal-place accuracy. Remember to have the
 * program check for division by zero. */


#include <stdio.h>
main()
{
	float a, b;

	printf("Enter value of a & b: ");
	scanf("%f %f", &a, &b);

	if (b == 0)
		printf("Zero division error.\n");
	else
		printf("%0.3f", a / b);
	printf("\n");

	return 0;
}

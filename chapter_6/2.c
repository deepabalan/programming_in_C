/* Program to calculate the average of a set of grades and count the
 * number of failing test grades. */

#include <stdio.h>
main()
{
	int grade, num, failure = 0, i;
	int total = 0;
	float avg;

	printf("How many grades will you be entering? ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i) {
		printf("Enter grade #%d: ", i);
		scanf("%d", &grade);

		total += grade;
		if (grade < 65) {
			++failure;
		}
	}
	avg = (float) total / num;
	printf("Grade average = %f\n", avg);
	printf("Number of failures = %d\n", failure);

	return 0;
}

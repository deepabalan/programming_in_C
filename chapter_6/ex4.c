/* Write a program that acts as a simple "printing" calculator. */

#include <stdio.h>
main()
{
	float number, store = 0;
	char operator;
	do {
		printf("Enter your number and operator: ");
		scanf("%f %c", &number, &operator);
		if (operator == 'S') {
			store = number;
			printf("%.6f\n", store);
		} else if (operator == '/') {
			if (number == 0)
				printf("Zero division error.\n");
			else {
				store = store / number;
				printf("%.6f\n", store);
			}
		} else if (operator == '-') {
			store = store - number;
			printf("%.6f\n", store);
		} else if (operator == '*') {
			store = store * number;
			printf("%.6f\n", store);
		} else if (operator == 'E') {
			printf("%.6f\nEnd of Calculations.\n", store);
			return 0;
		} else
			printf("Unknown operator...!!!\n");
	} while (1);
}

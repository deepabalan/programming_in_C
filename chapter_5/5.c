// nested for loops

#include <stdio.h>
main()
{
	int n, number, triangularNumber, counter;

	for (counter = 1; counter <= 5; ++counter) {
		printf("What triangular number do you want? ");
		scanf("%d", &number);

		triangularNumber = 0;

		for (n = 1; n <= number; ++n) {
			triangularNumber += n;
		}
		printf("Triangular number %d is %d\n", number, triangularNumber);
	}
	return 0;
}

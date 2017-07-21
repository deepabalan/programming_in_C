/* Write a program that takes an integer keyed in from the terminal
 * and extracts and displays each digit of the integer in English.
 * So, if the user types in 932, the program should display
 * "nine three two". */

#include <stdio.h>
main()
{
	int digit, rem;
	printf("Enter your digit: ");
	scanf("%d", &digit);
	while (digit != 0) {
		rem = digit % 10;
		digit = digit / 10;
		switch(rem) {
			case 1:
				if (rem == 1) {
					printf("ONE ");
					break;
				}
			case 2:
				if (rem == 2) {
					printf("TWO ");
					break;
				}
			case 3:
				if (rem == 3) {
					printf("THREE ");
					break;
				}
			case 4:
				if (rem == 4) {
					printf("FOUR ");
					break;
				}
			case 5:
				if (rem == 5) {
					printf("FIVE ");
					break;
				}
			case 6:
				if (rem == 6) {
					printf("SIX ");
					break;
				}
			case 7:
				if (rem == 7) {
					printf("SEVEN ");
					break;
				}
			case 8:
				if (rem == 8) {
					printf("EIGHT ");
					break;
				}
			case 9:
				if (rem == 9) {
					printf("NINE ");
					break;
				}
			case 0:
				if (rem == 0) {
					printf("ZERO ");
					break;
				}
			default:
				printf("\n");
		}
	}
	printf("\n");
}

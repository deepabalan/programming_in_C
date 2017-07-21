/* Write a program that takes an integer keyed in from the terminal and
 * extracts and displays each digit of the integer in English. So,
 * if the user types in 932, the program should display
 * 'nine three two' */

#include <stdio.h>
main()
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '0')
			printf("ZERO ");
		else if (c == '1')
			printf("ONE ");
		else if (c == '2')
			printf("TWO ");
		else if (c == '3')
			printf("THREE ");
		else if (c == '4')
			printf("FOUR ");
		else if (c == '5')
			printf("FIVE ");
		else if (c == '6')
			printf("SIX ");
		else if (c == '7')
			printf("SEVEN ");
		else if (c == '8')
			printf("EIGHT ");
		else if (c == '9')
			printf("NINE ");
	}
	printf("\n");
}

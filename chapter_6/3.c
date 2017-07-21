// Program to determine if a year is a leap year

#include <stdio.h>
main()
{
	int year;

	printf("Enter a year: ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("leap year");
	else
		printf("Not leap year");
	printf("\n");

	return 0;
}

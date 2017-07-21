// Implementing sign function

#include <stdio.h>
main()
{
	int number, sign;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number == 0)
		sign = 0;
	else if (number > 0)
		sign = 1;
	else
		sign = -1;
	printf("sign = %d\n", sign);

	return 0;
}

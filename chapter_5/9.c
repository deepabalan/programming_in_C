// reversing digit

#include <stdio.h>
main()
{
	int num, rem;

	printf("Enter your number: ");
	scanf("%d", &num);

	while (num != 0) {
		rem = num % 10;
		printf("%d", rem);
		num = num / 10;
	}
	printf("\n");
	return 0;
}

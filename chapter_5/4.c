// Asking the user for input

#include <stdio.h>
main()
{
	int i, num, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; ++i) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}

// Finding the greatest common divisor

#include <stdio.h>
main()
{
	int u, v, temp;

	printf("Please type in two nonnegative integers.\n");
	scanf("%d%d", &u, &v);

	while (v != 0) {
		temp = u % v;
		u = v;
		v = temp;
		printf("%d, %d\n", u, v);
	}
	printf("Their greatest common divisor is %d\n", u);
	return 0;
}

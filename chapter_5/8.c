// find gcd

#include <stdio.h>
main()
{
	int u, v, temp;

	printf("Enter two non-negative numbers:");
	scanf("%d %d", &u, &v);

	while (v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}
	printf("%d\n", u);
	return 0;
}

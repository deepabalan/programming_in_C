#include <stdio.h>
main()
{
	int num, i;
	num = 0;

	for (i = 1; i <= 200; ++i)
		num = num + i;
	printf("triangular num = %d\n", num);
	return 0;
}

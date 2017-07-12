/* Fix errors and run code */

#include <stdio.h>
main()
{
	int n, two_to_the_n;
	printf("TABLE OF POWERS OF TWO\n\n");
	printf("n\t2 to the n\n");
	printf("---\t------\n");
	two_to_the_n = 1;
	for(n = 1; n <= 10; ++n) {
		two_to_the_n *= 2;
		printf("%2i      %i\n", n, two_to_the_n);
	}
	return 0;
}

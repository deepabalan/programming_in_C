/* Write a program to find the next largest even multiple for the
   following values of i and j:
   i        j
   365      7
   12258    23
   996      4 */

#include <stdio.h>
main()
{
	int i, j;
	int next_val = 0;

	printf("enter the value of i and j: \n");
	scanf("%d\n%d", &i, &j);
	next_val = i + j - i % j;
	printf("next largest even multiple = %d\n", next_val);

	return 0;
}

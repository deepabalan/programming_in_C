// Categorizing single character

#include <stdio.h>
main()
{
	char c;

	printf("Enter your character: ");
	scanf("%c", &c);

	if (c >= '0' && c <= '9')
		printf("It's a digit.");
	else if (c >= 65 && c <= 92 || c >= 96 && c <= 122)
		printf("It's an alphabet.");
	else
		printf("It's a special character.");
	printf("\n");

	return 0;
}

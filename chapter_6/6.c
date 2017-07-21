// Evaluate expression

#include <stdio.h>
main()
{
	float a, b;
	char c;

	printf("Enter your expression: ");
	scanf("%f %c %f", &a, &c, &b);
	if (c == '+')
		printf("%f\n", a + b);
	else if (c == '-')
		printf("%f\n", a - b);
	else if (c == '*')
		printf("%f\n", a * b);
	else if (c == '/')
		if (b == 0)
			printf("Division by zero.\n");
		else
			printf("%f\n", a / b);
	else
		printf("Invalid Expression\n");

	return 0;
}

// Evaluate expression using switch case.

#include <stdio.h>
main()
{
	float a, b;
	char c;

	printf("Enter your Expression: ");
	scanf("%f %c %f", &a, &c, &b);

	switch(c)
	{
		case '+':
			printf("%f\n", a + b);
			break;
		case '-':
			printf("%f\n", a - b);
			break;
		case '*':
			printf("%f\n", a * b);
			break;
		case '/':
			if (b == 0)
				printf("ZeroDivisionError\n");
			else
				printf("%f\n", a / b);
			break;
		default:
			printf("Invalid Expression.\n");
			break;
	}
	return 0;
}

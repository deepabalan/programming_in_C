// Write a program that converts 27 from degrees Fahrenheit (F) to
// degrees Celsius (C) using the following formula:
// C = (F - 32) / 1.8


#include <stdio.h>
main()
{
	int fahr = 27;
	float celsius;

	celsius = (fahr - 32) / 1.8;
	printf("%i degree fahrenheit = %f degree celsius\n", fahr, celsius);

	return 0;
}

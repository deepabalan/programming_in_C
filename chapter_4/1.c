/* Using the basic data types. */

#include <stdio.h>
main()
{
	int int_var = 100;
	float float_var = 331.79;
	double double_var = 8.44e+11;
	char char_var = 'W';

	_Bool bool_var = 0;

	printf("intger variable = %i\n", int_var);
	printf("floating variable = %f\n", float_var);
	printf("double variable = %e\n", double_var);
	printf("double variable = %g\n", double_var);
	printf("charcater variable = %c\n", char_var);

	printf("boolean variable = %i\n", bool_var);

	return 0;
}

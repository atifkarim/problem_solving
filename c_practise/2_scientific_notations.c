/**
 * Conversion Charecters
 * %f - decimal notation
 * %e - scientific notation
 * %g - computer decides
 *      < -4 OR > 5 it will be scientific notation
 */

#include <stdio.h>

int main()
{
	double dogs = 2.5e4;
	printf("Decimal %f\nExponential %e\nComputer_Decided %g\n", dogs, dogs, dogs);

	double small_ammount_dogs = 2.5e-5;
	printf("Decimal %f\nExponential %e\nComputer_Decided %g\n", small_ammount_dogs, small_ammount_dogs, small_ammount_dogs);

	double large_ammount_dogs = 2.5e6;
	printf("Decimal %f\nExponential %e\nComputer_Decided %g\n", large_ammount_dogs, large_ammount_dogs, large_ammount_dogs);

	printf("How many animals you have?: ");
	double animals;
	scanf("%lf", &animals);
	printf("Decimal %f\nExponential %e\nComputer_Decided %g\n", animals, animals, animals);

	return 0;
}
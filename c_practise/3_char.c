/**
 * char x = 'A'
 * remember sizeof(charecter) variable is 1 byte. Eg. sizeof(x) = 1. because it is nothing but char datatype
 *  sizeof(charecter_variable_value) is 1 byte. sizeof('A') = 4. because it is nothing but integer
 */


#include <stdio.h>

int main()

{
	// print char hardcoded way
	char letter = 'D';
	printf("letter is: %c\n", letter);
	printf("letter in integer format is: %i\n", letter);

	// get sizeof of char var and value
	printf("sizeof(letter): %ld\n", sizeof(letter));
	printf("sizeof('D'): %ld\n", sizeof('D'));

	// take input as char
	char given_letter;
	printf("Enter your char data: ");
	scanf("%c", &given_letter);
	printf("given_letter is: %c\n", given_letter);
	printf("given_letter in integer format is: %i\n", given_letter);

	// take input as integer and get it's corresponsing char value
	int num;
	printf("Enter value between 0 to 127: ");
	scanf("%i", &num);
	printf("num in integer format is: %i\n", num);
	printf("num in char format is: %c\n", num);

	// Add two char and get another char(whose integer value is in between 0 to 127)
	char add_char = 'A' + '\t';
	printf("Value of 'A': %i and '\t' is: %i\n", 'A', '\t');
	printf("Addition of 'A' + \\t is: %c(%d)\n", add_char, add_char);

	return 0;
}
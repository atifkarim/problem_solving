#include <stdio.h>


size_t my_stringlen(const char *s){
    int n;
    n = 0;
    while(s[n]!= '\0'){
        n++;
        // printf("here val is: %d\n", n);
    }

    return n;
}

char *my_strcpy(char *destination, char *source)
{
    char *start = destination;
    printf("\nhere val is: %s\n", start); // use %c then you will see a charecter
 
    while(*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
 
    *destination = '\0'; // add '\0' at the end
    return start;
}

char *my_strcat(char *new_char, char *old_char){
    char *start = old_char;

    while(*old_char!='\0'){
        old_char++;
    }
    while(*new_char!=0){
        *old_char = *new_char;
        old_char++;
        new_char++;
    }
    *old_char = '\0';
    return start;

}

int my_strcmp(char *strg1, char *strg2)
{
    while( ( *strg1 != '\0' && *strg2 != '\0' ) && *strg1 == *strg2 )
    {
        strg1++;
        strg2++;
    }
 
    if(*strg1 == *strg2)
    {
        return 0; // strings are identical
    }
 
    else
    {
        return *strg1 - *strg2;
    }
}

int main(){
    char name[] = "Atif Bin";
    char name_dest[20];

    // copy String
    printf("\n\n!!!!!!!!!!!!!!!!!!!!!! Copy String Operation is started !!!!!!!!!!!!!!!!!!!!!!\n");
    strcpy(name_dest, name);
    printf("\nCopying string with default lib is: %s\n", name_dest);
    // char dest_func[20];
    // char src_func[20] = "Name is mine";
    char *my_strcpy_return = my_strcpy(name_dest, name);
    printf("Copying string with manual lib is: %s\n",my_strcpy_return);
    printf("here is another rule");
    my_strcpy(name_dest, name);
    printf("Now res is with manula lib: %s\n", name_dest);

    // Now calculating length
    printf("\n\n!!!!!!!!!!!!!!!!!!!!!! String length Calculation Operation is started !!!!!!!!!!!!!!!!!!!!!!\n");
    int length;
    printf("\nLength of string with default lib is: %d\n", strlen(name));

    size_t str_len = my_stringlen(name);
    printf("Length of string with manual lib is: %d\n", str_len);



    // now concatenate operation
    printf("\n\n!!!!!!!!!!!!!!!!!!!!!! Concatening Operation is started !!!!!!!!!!!!!!!!!!!!!!\n");
    char char_1[40] = "Hello";
    strcat(char_1," World");
    printf("\nConcatening with default lib, result is %s\n", char_1);
    char *my_concat_ret = my_strcat(" World_BD", char_1);
    printf("Concatening with manual lib, result is %s\n", char_1);

    // comparison of strings
    printf("\n\n!!!!!!!!!!!!!!!!!!!!!! Comparison of Strings Operation is started !!!!!!!!!!!!!!!!!!!!!!\n");
    char data_1[] = "Atif";
    char data_2[] = "AtiF";
    int comparator_val;
    printf("\nComparison is doing with default lib");
    comparator_val = strcmp(data_1, data_2);
    if (comparator_val == 0){
        printf("\nVal of comparator val is %d so data_1 and data_2 are same string", comparator_val);
    }
    else
    {
        printf("\nVal of comparator val is %d so They are not same string", comparator_val);
    }

    int function_comparator = my_strcmp(data_1, data_2);
    printf("\nComparison is doing with manual lib");
    if (function_comparator == 0){
        printf("\nVal of function_comparator is %d so data_1 and data_2 are same string",function_comparator);
    }
    else
    {
        printf("\nVal of function_comparator is %d so They are not same string", function_comparator);
    }


    printf("\n");
    return 0;
}

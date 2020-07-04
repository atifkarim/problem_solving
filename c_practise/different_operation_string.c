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
    return 0;
}
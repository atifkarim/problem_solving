#include <stdio.h>

char * pass_char()
{
    char * x = "Atif";
    return x;
}

int main() {

    char * a = pass_char();
    printf("Hello, World! ,%s \n", a);

    char * p = "Hello";
    printf("value of p: %s ,*p: %c \n", p, *p);
    return 0;
}
#include<stdio.h>
// #include<conio.h>

void main(void){
    char str_1[] = "Bangladesh";
    int n;
    // clrscreen();
    // clrscr();
    for(n = 0; str_1[n]!='\0';n++){
        printf("value: %d \t",n);
        putchar(str_1[n]);
        putchar('\n');
    }
    // getch();
}


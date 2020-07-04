/*
https://overiq.com/c-programming-101/the-sprintf-function-in-c/
*/

#include<stdio.h>
#include<string.h>
int factorial(int );
 
int main()
{
 
    int sal;
    char name[30], designation[30], info[60];
 
    printf("Enter your name: ");
    gets(name);
 
    printf("Enter your designation: ");
    gets(designation);
 
    printf("Enter your salary: ");
    scanf("%d", &sal);
 
    sprintf(info, "Welcome %s !\nName: %s \nDesignation: %s\nSalary: %d",
        name, name, designation, sal);
 
    printf("\n%s", info);

    printf("\n\n");
    char s1[20];
    char s2[20];
 
    int x = 100;
    float y = 300;
 
    sprintf(s1, "%d", x);
    sprintf(s2, "%f", y);
 
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
 
    // signal to operating system program ran fine
 
    // signal to operating system program ran fine
    return 0;
}
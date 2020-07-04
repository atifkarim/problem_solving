#include<stdio.h>
// #include<conio.h>

int main(){
    char name[50] = "MD Atif Bin Karim";
    printf("name is %s\n", name); // don't give new line charecter at the end in printf, then it would be a warning
    // printf("%s",name);
    printf(name); // shows warning

    printf("\nsize is %zu\n", sizeof(name));

    printf("\nTaking input as string. Please write your string in next line\n");
    char my_name[50];
    gets(my_name);
    printf("\nSo your name is %s\n", my_name);

    for(int i =0; name[i] != '\0'; i++ ){
        // condition could be int i =0;i<sizeof(name);i++
        // then also uncomment if condition
        printf("char is: %c \n", name[i]);
        // if(name[i]=='\0'){
        //     printf("finished");
        //     break;
        // }
    }

    int a,b,c;
        printf("\nEnter first val: ");
        scanf("%d",&a);
        printf("\nEnter second val: ");
        scanf("%d",&b);
        c = a+b;
        printf("\nSum is: %d\n",c);

    char *msg = "I am a good bro";
    printf("\nUsing pointer printing msg\n");
    for(int i =0; *(msg+i)!= '\0';i++){
        printf("msg is: %c\n", *(msg+i));
    }

    printf("Writing name with double quoatation \"I am here\"\n");
    printf("Writing with a backslash \\ is like this\n");

    
        return 0;

}


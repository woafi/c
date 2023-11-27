#include <stdio.h>

//func prototypes
void ASCII_to_string();
void string_to_ASCII();
void again();

void main()
{
   again();
}
void again(){
    printf("1) String to ASCII\n2) ASCII to String\n3) Exit\n");
    printf("Enter your choice: ");
    int c; scanf("%d",&c);
    switch (c) {
    case 1: string_to_ASCII(); break;
    case 2: ASCII_to_string(); break;
    case 3: return;
    default: printf("Invalid Input\n");break;
}
}
void string_to_ASCII(){
    system("cls");
    char str[100];
    printf("Enter a sentence: ");
    fflush(stdin);
    fgets(str, sizeof(str), stdin);
    printf("Converted to ASCII code: ");
    for(int i=0;i<str[i]!='\0';i++){
        printf("%d",str[i]);
    }
    printf("\n\n");
    again();
}
void ASCII_to_string(){
    system("cls");
    char ascii[1000];
    printf("Enter ASCII value: \n");
    fflush(stdin);
    fgets(ascii, sizeof(ascii), stdin);
    int num = 0;
    for(int i=0;i<ascii[i]!='\0';i++){
        num = num*10 + (ascii[i] - '0');
        if(num >=32 && num<=122){
            printf("%c",num);
            num = 0;
        }
    }
    printf("\n\n");
    again();
}

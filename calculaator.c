//Write a C program for a simple calculator that repeatedly asks the user for two numbers and an operation (+, -, *, /) until the user chooses to exit. Must use a do while loop to repeat until exit.
#include <stdio.h>
int main() {
    int choice;
    double a,b,result;
    char op;
    do {
        printf("Enter two numbers a,b and op: ");
        scanf("%lf %lf %c", &a , &b , &op);
        switch(op) {
            case '+':
            result = a + b;
            printf("%lf",result);
            break;
            case '-':
            result = a - b;
            printf("%lf",result);
            break;
            case '*':
            result = a * b;
            printf("%lf",result);
            break;
            case '/':
            
            if ( a != 0) {
                result = a / b;
                printf("%lf",result);
            }
            else {
                
                printf("error");
                break;
                 }
                 default :
                 printf("invalid operation"); }
                 printf(" Enter 1 to continue,0 to exit");
                 scanf("%d",&choice); }
                while(choice !=0);
                 printf("calculator is exited");
                 return 0;
            
    
            }


        
        
    


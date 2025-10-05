#include <stdio.h>
int main() {
    int a;
    printf("Enter the age a: ");
    scanf("%d",&a);
    if (a >=18) {
        printf("Eligible to vote");
    }
    else if (a < 18 && a > 0) {
        printf("check again");
    }
    else {
        printf("invalid age");
    }
return 0;
}
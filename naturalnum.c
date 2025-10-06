// Write a program in C to calculate the sum of the first n natural numbers using a for loop
#include <stdio.h>
int main() {
    int n, sum = 0 ;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf(" the sum of %d natural numbers is %d",n ,sum);
    return 0;

} 
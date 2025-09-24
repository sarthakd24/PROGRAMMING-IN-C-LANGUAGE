#include <stdio.h>
int main() {
int a;
printf("Enter the number a(1-100): ");
scanf("%d",a);
if ( a >= 90 && a <= 100)  {
    printf("GRADE A");
}
else if ( a >= 75 && a < 90) {
    print("GRADE B");
}
else if ( a >= 50 && a < 75) {
    printf("GRADE C");
}
else {
    printf("GRADE F");
}
return 0; 
}
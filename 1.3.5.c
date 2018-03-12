#include <stdio.h>

int main (){
    int a;
    int b;
    int c;
    int sum;

    printf("Please enter the first integer:");
    scanf("%d", &a);
    printf("Please enter the second integer:");
    scanf("%d", &b);
    printf("Please enter the third integer:");
    scanf("%d", &c);

    sum = a + b + c;
    printf("Sum is %d.", sum);
    return 0;
}

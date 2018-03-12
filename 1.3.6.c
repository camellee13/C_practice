#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer1;
    int integer2;
    printf("Please enter the first integer:");
    scanf("%d", &integer1);
    printf("Please enter the second integer:");
    scanf("%d", &integer2);

    int a = integer1;
    integer1 = integer2;
    integer2 = a;


    printf("Integer 1 is %d.€n", integer1);
    printf("Integer 2 is %d.€n", integer2);
    return 0;
}

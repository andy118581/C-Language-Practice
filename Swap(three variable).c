#include <stdio.h>

int main(){
    int integer1, integer2, integer3;
    printf("Please enter the first integer:");
    scanf("%d", &integer1);
    printf("Please enter the second integer:");
    scanf("%d", &integer2);
    printf("Please enter the second integer:");
    scanf("%d", &integer3);
    integer3 = integer1 + integer2 + integer3;
    integer1 = integer3 - integer1- integer2;
    integer2 = integer3 - integer1- integer2;
    integer3 = integer3 - integer1- integer2;
    printf("integer1 is : %d.\n" , integer1);
    printf("integer2 is : %d.\n" , integer2);
    printf("integer3 is : %d.\n" , integer3);
    return 0;
}

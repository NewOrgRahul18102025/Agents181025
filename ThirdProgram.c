#include<stdio.h>
int main() {
    int a,b,r;
    printf("Enter a value: ");
    scanf("%d",&a);
    printf("\nEnter b value : ");
    scanf("%d",&b);
    do {
        r = b %a;
        b = a;
        a = r;

    } while(a != 0);
    printf("GCD of two number is %d",b);
    return 0;

}

/*
GCD is Greatest Common Divisor
*/
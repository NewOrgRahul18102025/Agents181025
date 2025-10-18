#include<stdio.h>
int main() {
    // To find fibnooci Series of the given number 
    int a,b,i,c,n;
    printf("To find the Fibnocci Series -- Enter the number : ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    if (n<=1){
        printf("%d",a);
    }
    else {
        printf("The Entered Values are %d %d",a,b);
        for (i=3;i<=n;i++) {
            c = a+b;
            printf("%d ",c);    
            a = b;
            b = c;
        }
        return 0;
    } //else 
} //main method
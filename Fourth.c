#include<stdio.h>
int main () {
    int s =0,n,i;
    // To find the sum of n natural numbers
    printf("Enter the number n : ");
    scanf("%d",&n);
    s = 0;
    for (i=1;i<=n;i++) {
        s = s+i;
    }
    printf("The sum of %d natural number is : %d ",n,s);
    return 0;
}
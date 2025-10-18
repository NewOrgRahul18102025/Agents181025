// Count the no of factor of given number
#include<stdio.h>
int main() {
    int n,i,c=0;
    printf("Enter n value : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        if(n%i==0) {
            c++;
        }
    }
    printf("The count of Factor of number is %d",c);
}
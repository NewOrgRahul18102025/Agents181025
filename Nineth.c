// Sum of no of factor of given number
#include<stdio.h>
int main() {
    int n,i,s = 0;
    printf("Enter n value : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if (n%i==0) {
            s = s + i;
        }
    }
    printf("The sum of Factor of number is %d",s);
}

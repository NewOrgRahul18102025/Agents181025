// check whether a give number is perfect or not
#include<stdio.h>
int main() {
    int n,i,s=0;
    printf("Enter n value : ");
    scanf("%d",&n);
    for (i=1;i<=n/2;i++){
        if (n%i == 0) {
            s = s+i;
        }
    }
    if (s == n)
    printf("Is a perfect number ");
    else 
    printf("Not a perfect number");
}
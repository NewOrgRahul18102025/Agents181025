// Check the Given number is Prime number or composite number
#include<stdio.h>
int main() {
    int n,i,ct=0;
    printf("Enter n value : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if (n%i == 0) {
            ct++;
        }
    }
    if (ct==2) {
        printf("the give number is Prime No");
    }
    else {
        printf("It is a Composite No");
    }
}
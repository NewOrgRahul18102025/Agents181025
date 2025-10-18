//factorical number
#include<stdio.h>
int main() {
    int n,f=1,i=1;
    printf("Enter n number is : ");
    scanf("%d",&n);
    for (i;i<=n;i++) {
        f = f*i;
    }
    printf("The factorical of %d number is %lu",n,f);
}
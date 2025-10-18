#include<stdio.h>
int main() {
    int n,i;
    printf("Enter n value: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
          // printing of the factor 
          if (n%i == 0) {
            printf("\nThe factor number of %d is %d",n,i);
          } 
    }
}
#include<stdio.h>
// Sum of even and odd nos of I n natural numbers
int main () {
    int n,so,se,i;
    printf("Enter n value: ");
    scanf("%d",&n);
    so = 0;
    se = 0;
    for (i = 1;i<=n;i++) {
        if (i % 2 != 0)
        so = so + i;
        else 
        se = se +i;
    }
    printf("The sum of odd number is : %d",so);
    printf("\nThe sum of even number is : %d",se);
}
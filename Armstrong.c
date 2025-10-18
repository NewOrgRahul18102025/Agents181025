/*Armstrong number for find using C,Java,Python*/

/*C - Complier*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, n, r, s = 0, ct = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    n = num;
    int x = num;

    // Count number of digits
    while (x > 0) {
        ct++;
        x = x / 10;
    }

    printf("The total digits of given number is: %d\n", ct);

    x = num; // Reset value to calculate armstrong

    // Calculate sum of powers
    while (x > 0) {
        r = x % 10;
        s = s + ((int)pow(r, ct)+0.5);
        x = x / 10;
    }

    if (s == n) {
        printf("%d is an Armstrong Number.\n", n);
    } else {
        printf("%d is NOT an Armstrong Number.\n", n);
    }

    return 0;
}

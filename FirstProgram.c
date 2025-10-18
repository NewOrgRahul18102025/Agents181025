#include<stdio.h>

int power (int base, int exp) {
      int res = 1;
      for (int i = 0; i<exp; i++) {
            res = res*base;
      }
      return res;
} // power function

// To Find the Armstrong number 

// Logic - given number is each digit cube then if we add it answer we will get 

int main () {
      int n,s=0,ct=0,r,m,x;
      printf("Enter a number: \n");
      scanf("%d",&n);
      m = n;
      x = n;
      // To find the iterate of Loop times find 
      while (x>0) {
            ct++;
            x = x/10;
      }
      // Sum of Armstrong number 
      while (n>0) {
            r = n % 10;
            s = s + power(r,ct);// no floating point 
            n = n / 10;
      }
      if (s == m)
            printf("It is an Armstrong Number");
      else
            printf("It is not an Armstrong Number");
      return 0;
}
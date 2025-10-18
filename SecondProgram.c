// Find the number is Palindrome or Not a palindrome number
#include<stdio.h>
#include<math.h>
int main() {
	int n,r,rev=0,m;
	printf("Enter the a value : ");
	scanf("%d",&n);
	m = n;
	do {
		r = n % 10;
		rev = rev * 10 +r;
		n = n /10;
	} while (n>0); 
	if (rev == m)
	printf("Is a palindrome number");
	else 
	printf("Is not a palindrome number");

}
	
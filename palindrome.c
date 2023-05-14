#include<stdio.h>
int main()
{
	int n, reversed= 0, remainder,original;
	printf(" Enter  the integer: ");
	scanf("%d",&n);
	original = n;
	
	while(n != 0)
	{
		remainder= n%10;
		reversed = reversed *10 + remainder;
		n/=10;
	}
	
	// check palindrome if original and reversed are same
	if(original == reversed)
	{
		printf("The number is palindrome");
	}
	else{
		printf("the number is not a palindrome");
	}
	return 0;
}

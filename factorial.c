#include<stdio.h>
int main()
{
	int n,i;
	unsigned long long fact = 1;
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	//show error if the user enters negative number
	if(n<0)
	{
		printf("Error, factorial of a negative number does'nt exists.");
	}
	else
	{
		for(i=1;i<=n;++i)
		{
			fact *=i;
		}
	}printf("the factorial of %d = %llu",n,fact);
	
	return 0;
}

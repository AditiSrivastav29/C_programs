#include<stdio.h>
int main()
{
	int i,n;
	
	//initialize first and second term
	int t1 = 0,t2 = 1;
	
	//initialize the 3rd term
	int nextterm = t1 + t2;
	
	//get no. of terms from user
	printf("Enter the no. of terms: ");
	scanf("%d",&n);
	
	//print the first two terms
	printf("fibonacci series:  %d, %d, ",t1,t2);
	
	//printing the 3rd term
	for(i=3;i<=n;++i)
	{
		t1 = t2;
		t2 = nextterm;
		nextterm = t1+t2;
		printf("%d, ",nextterm);
	}
	return 0;
	
//fibonacci series by WHILE LOOP
	
	//while(nextterm <=n)
//	{
//		printf("%d, ", nextterm);
//		
//		t1 = t2;
//		t2 = nextterm;
//		nextterm = t1+t2;
//	}
		
	
	//return 0;	
	
}

#include<stdio.h>
int main()
{
	long long n;
	int count =0;
	
	printf("Enetr the integers:  ");
	scanf("%lld", &n);
	
	do{
		n= n/10;
		++count;
	}while(n!=0);
	printf("Number of digits: %d",count);
}

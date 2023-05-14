#include<stdio.h>
int main()
{
	int first,second,temp;
	printf("Enter the two numbers: \n");
	scanf("%d%d",&first,&second);
	
	temp=first;
	first=second;
	second=temp;
	
	printf("after swapping first number is =%d ",first);
	printf("after swapping second number is = %d",second);
}

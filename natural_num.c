#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the positive integers: ");
	scanf("%d",&n);
	
	//for(i=1;i<=n;i++)
	//{
	//	sum= sum+i;
	//}
	
	i=1;
	while(i<=n)
	{
		sum +=i;
		++i;
	}
	
	
	
	printf("sum=%d",sum);
	return 0;
	
}

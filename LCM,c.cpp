#include<stdio.h>
int main()
{
	int n1,n2,max,lcm;
	printf("Enter the first number: ");
	printf("Enter the second number: ");
	scanf("%d%d",&n1,&n2);
	
	if(n1>n2)
	{
		max=n1;
	}
	else{
		max=n2;
	}
	
	while(1){
		if(max%n1==0 || max%n2==0)
		{
			lcm=max;
			break;
		}
	}++max;
	
	printf("LCM of two number is: ");
	return 0;
}

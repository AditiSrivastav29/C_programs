#include<stdio.h>
int main()
{
	int n1,n2,max,lcm,step;
	printf("Enter the first number: \n ");
	printf("Enter the second number: \n");
	scanf("%d%d",&n1,&n2);
	
	if(n1>n2)
	{
		max= step = n1;
	}
	else{																					//wrong program
		max= step = n2;
	}
	
	while(1){
		if(max%n1==0 && max%n2==0)
		{
			lcm=max;
			
			break;
		}max+=step;
	}printf("LCM of two number is: %d",n1,n2,lcm);
	return 0;
}

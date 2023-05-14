#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
						
						//TWO CONDITINS FOR ONE PROGRAM
	
//  if(year%400==0 || year%100==0 || year%4==0)
//	{
//		printf("%d the is a leap year",year);
//	}
//	else
//	{
//		printf("%d is not a leap year",year);
//	}

	
	if(year%400==0 || year%4==0)
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
	}
}

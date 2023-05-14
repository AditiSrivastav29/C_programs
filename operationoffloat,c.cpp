#include<stdio.h>
int main()
{
	float a,b,sum;
	printf("enter the two integers: ");
	scanf("%lf %lf",&a, &b);
	
	sum= a*b;
	printf("sum=%.3lf",sum);
}

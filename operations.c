#include<stdio.h>
int main()
{
	int a,b,add,mul,sub,div, mod;
	printf("Enter the value of a=\n");
	printf("Enter the value of b=\n");
	scanf("%d%d",&a,&b);
	
	add= a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod= a%b;
	printf("value of addition=%d\n",add);
	printf("value of subtraction=%d\n",sub);
	printf("value of multiplication=%d\n",mul);
	printf("value of division=%d\n",div);
	printf("value of mod=%d\n",mod);
	return 0;
}

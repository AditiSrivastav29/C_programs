#include<stdio.h>
int main()
{
	char c;
	int lowercase,uppercase;
	printf("enter the character: ");
	scanf("%c",&c);
	
	//evalute small alphabets
	lowercase= (c=="a" || c=="e" || c=="i" || c=="o" || c=="u");
	
	//evalutes the upper alphabets
	uppercase=(c=="A" || c=="E" || c=="I" || c=="O" || c=="U");
	
	if(lowercase || uppercase)
		printf("%c is vowel",c);
	else
		printf("%c is consonent ",c);
	return 0;
}

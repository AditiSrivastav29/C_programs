#include<math.h>
#include<stdio.h>
int main()
{
	double a,b,c,discriminant,root1,root2,realpart,imagpart;
	printf("Enter the coffeicient a,b,c:  ");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	discriminant= b*b-4*a*c;
	
	//for real and different roots
	if(discriminant>0){
		root1= (-b+sqrt(discriminant)) / (2*a);
		root2= (-b-sqrt(discriminant)) / (2*a);
		
		printf("root1=%.2lf ,root2=%.2lf",root1,root2);
	}
	//for equal and real roots
	else if(discriminant == 0){
		root1= root2 = (-b/ (2*a));
		printf("root1=root2= %.2lf",root1);
	}
	
	//for roots are not equal
	else{
		realpart= -b/(2*a);
		imagpart= sqrt(-discriminant) / (2 * a);
		printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realpart, imagpart, realpart, imagpart);
    }

 	return 0;
	
		
}

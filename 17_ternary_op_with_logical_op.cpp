#include<stdio.h>
int main()
{
	int a,b,c,max;
	
	printf("Enter first number :");
	scanf("\n%i",&a);
	
	printf("Enter second number :");
	scanf("\n%i",&b);
	
	printf("Enter third number :");
	scanf("\n%i",&c);
	
	printf("\nKrishna=%i\nRama=%i\nGovardhan=%i",a,b,c);
	
	max = (a>b && a>c) ? a : (b>c) ? b:c;
	
	printf("\nmax=%d",max);
	
	return 0;
}
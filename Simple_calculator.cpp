#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two integer number:\n");
	scanf("%i %i",&a,&b);
	
	printf("\nSum of %i and %i = %i",a,b,a+b);
	printf("\nSub of %i and %i = %i",a,b,a-b);
	printf("\nMUl of %i and %i = %i",a,b,a*b);
	printf("\nDiv of %i and %i = %i",a,b,a/b);
	printf("\nMod of %i and %i = %i",a,b,a%b);
	
	
	
	return 0;
	
}
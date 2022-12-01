#include<stdio.h>
int main()
{
	float principle, time, rate, SI;
	
	printf("Enter principle (amount):\n");
	scanf("%f",&principle);
	printf("\nEnter time:\n");
	scanf("%f",&time);
	printf("\nEnter rate:\n");
	scanf("%f",&time);
	SI = (principle * time * rate)/100;
	
	printf(" Simple Interest = %f",SI);
	return 0;
}
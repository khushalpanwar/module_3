#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter any integer number:\n");
	scanf("%i",&num);
	
	if(num%2==0)
	{
		printf("Entered Integer value %i is Even...!",num);
	}
	else
	{
		printf("Entered Integer value %i is Odd...!",num);
	}
	
	return 0;
}
















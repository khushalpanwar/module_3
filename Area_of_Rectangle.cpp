#include<stdio.h>
int main()
{
	float length, width, area;
	
	printf("Enter length of the Rectangle:\n");
	scanf("%f",&length);
	
	printf("Enter width of the Rectangle:\n");
	scanf("%f",&width);
	
	area = length * width;
	
	printf("Area of Rectangle is %f\n", area);
	
	return 0;
}
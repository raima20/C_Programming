#include<stdio.h>
float div(float a, float b)
{
	float c;
	c=a/b;
	return c;
}
int main()
{
	float a,b,d;
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	d=div(a,b);
	printf("The result is:%.2f",d);
	return 0;
}

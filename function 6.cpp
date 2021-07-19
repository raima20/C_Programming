#include<stdio.h>
float add(float a,float b)
{
	float c;
	c=a+b;
	return c;
}
int main()
{
	float a,b,d;
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	d=add(a,b);
	printf("%f",d);
	return 0;
}

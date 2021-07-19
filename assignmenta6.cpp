#include<stdio.h>
int main()
{
	float a,b,c,avarage;
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	printf("Enter the third number:");
	scanf("%f",&c);
	avarage=(a+b+c)/3.0;
	printf("The avarage is:%.2f",avarage);
	return 0;
}

#include<stdio.h>
int main()
{
	float a,x,b;
	printf("Enter the value of a and b:");
	scanf("%f %f",&a,&b);
	x=(-b)/a;
	if(a==0)
	printf("It is an error!");
	else
	printf("The value of x is:%.2f",x);
	return 0;
}

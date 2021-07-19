#include<stdio.h>
int add( int a, int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int a,b,d;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	d=add(a,b);
	printf("The sum is:%d",d);
	return 0;
}

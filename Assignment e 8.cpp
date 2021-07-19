#include<stdio.h>
float mult(int a, float b )
{
	float p;
	p=a*b;
	printf("%f\n",p);
	return p;
}
int main()
{
	int a;
	float b,m;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%f",&b);
	m=mult(a,b);
	printf("the result is:%f",m);
	return 0;
}


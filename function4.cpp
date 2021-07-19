#include<stdio.h>
int mult(int a, int b)
{
	int c;
	c=a*b;
	return c;
	
}
int main()
{
	int a;
	a=mult(4,6);
	printf("%d",a);
	return 0;
}

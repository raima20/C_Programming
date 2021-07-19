#include<stdio.h>
int add(int a, int b)
{
int c;
c=a+b;
return c;
}
int main()
{
	int a;
	a=add(4,8);
	printf("%d",a);
	return 0;
}

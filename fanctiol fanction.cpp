#include<stdio.h>
int fact(int n)
{
	int i,mult=1;
	for(i=1;i<=n;i++)
	{
		mult=mult*i;
	}
		return mult;
	}
	int main()
	{
		int n,v;
		printf("enter the number");
		scanf("%d",&n);
		v=fact(n);
		printf("the factorial=%d",v);
		return 0;
	}









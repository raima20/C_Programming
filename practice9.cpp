#include<stdio.h>
int mult(int n)
{
	int m=1,i;
	for(i=1;i<=n;i++)
	{
		m=m*i;
	}
	return m;
}
int main()
{
	int p,n;
	printf("Enter the range:");
	scanf("%d",&n);
	p=mult(n);
	printf("The factorial is:%d",p);
	return 0;
}
	
	


#include<stdio.h>
int fib(int n)
{
	if(n<=1)
	return n;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n,i;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("%d\t",fib(i));
	return 0;
}

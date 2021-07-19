#include<stdio.h>
int main()
{
	int n,k;
	printf("enter the number");
	scanf("%d",&n);
	k=(n&(n-1));
	printf("print the value:%d",k);
	return 0;
}

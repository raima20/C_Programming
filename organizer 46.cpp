#include<stdio.h>
int main()
{
	int a=0,n;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		a=a*10;
		a=a+n%10;
		n=n/10;
	}
	printf("%d",a);
	return 0;
}

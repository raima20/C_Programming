#include<stdio.h>
int main()
{
	int i,j,n,sum=0,s;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    s=0;
		for(j=1;j<=i;j++)
		s=s+j;
		sum=sum+s;
	}
	
	printf("The sum is:%d",sum);
	return 0;
}

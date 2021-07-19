#include<stdio.h>
int main()
{
	int i,n,sum=0,j,s=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		sum=sum+j;
}
	printf("%d",sum);
	return 0;
}

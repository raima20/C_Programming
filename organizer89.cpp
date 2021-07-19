#include<stdio.h>
int main()
{
	int i,n,sum1=0,sum2=0;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum1=sum1-i;
		else
		sum2=sum2+i;
	}
	
	printf("%d",sum1+sum2);
	return 0;
	
}

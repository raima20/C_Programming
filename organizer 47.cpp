#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=0,p;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   p=pow(i,2);
	   sum=sum+p;	
	}
	printf("%d",sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int n,a[100],i,l,u,count=0,j;
	printf("Enter the lower number:");
	scanf("%d",&l);
	printf("Enter the upper number:");
	scanf("%d",&u);
	for(i=l;i<=u;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		{
			a[n]=i;
			n++;
		}
	}
	for(i=0;i<n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,a[100],temp=0,sum,c,p,l,u;
	printf("Enter the lower range:");
	scanf("%d",&l);
	printf("Enter the upper number:");
	scanf("%d",&u);
	for(i=l;i<=u;i++)
	{
		c=0;
		sum=0;
		temp=p=i;
		while(temp>0)
		{
			temp=temp/10;
			c++;
		}
		for(j=1;j<=c;j++)
		{
			temp=p%10;
			p=p/10;
			sum=sum+pow(temp,c);
		}
		if(sum==i)
		{
		a[n]=i;
		n++;
	}
}
	for(i=0;i<n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	
	return 0;
}

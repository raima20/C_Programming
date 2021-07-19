#include<stdio.h>
#include<math.h>
int main()
{
	int l,u,p,c,temp=0,i,j,sum=0;
	printf("Enter the lower the number:");
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
	printf("%d\n",i);
}
	return 0;
}

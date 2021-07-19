#include<stdio.h>
void prime(int l,int u)
{
	int i,counter=0,j;
	for(i=l;i<=u;i++)
	{
		counter=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			counter++;
		}
		if(counter==2)
		printf("%d\n",i);
	}
}
int main()
{
	int l,u;
	printf("Enter the lower number:");
	scanf("%d",&l);
	printf("Enter the upper number:");
	scanf("%d",&u);
	prime(l,u);
	return 0;
}

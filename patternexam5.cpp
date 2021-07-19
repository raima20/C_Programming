#include<stdio.h>
int main()
{
	int i,j,a=1,b=1,c,range;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	printf(" ");
	printf("%d",a);
	printf("\n");
	for(i=2;i<=range;i++)
	printf(" ");
	printf("%d %d",b,a+b);
	printf("\n");

	{
		c=a+b;
		a=b;
		b=c;
	}

	for(i=3;i<=range;i++)
	{
	for(j=range;j>=i;j--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
void pattern(int range)
{
	int i,a=1,b=1,c,j;
	for(i=1;i<=range;i++)
	printf(" ");
	printf("%d",a);
	printf("\n");
	for(i=1;i<range;i++)
	printf(" ");
	printf("%d %d",b,a+b);
		c=a+b;
		a=b;
		b=c;
		printf("\n");
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
}
int main()
{
	int range;
	printf("Enter the range:");
	scanf("%d",&range);
	pattern(range);
	return 0;
}


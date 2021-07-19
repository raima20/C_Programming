#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,range,p=1,po=1;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=range;j>=i;j--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%d ",p);
			p=pow(10,po)+p;
			po++;
		}
		printf("\n");
	}
	return 0;
}

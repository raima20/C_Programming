#include<stdio.h>
int main()
{
	int i,j,k,range;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		for(k=range;k>=i;k--)
		printf("* ");
		printf("\n");
	}
	for(i=2;i<=range;i++)
	{
		for(j=range;j>=i;j--)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("* ");
		printf("\n");
	}
	return 0;
}

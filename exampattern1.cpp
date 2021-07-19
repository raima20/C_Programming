#include<stdio.h>
int main()
{
	int i,j,range;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=range;j>=i;j--)
		printf("");
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}

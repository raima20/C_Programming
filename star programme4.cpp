#include<stdio.h>
void pattern1(int range)
{
	int i,j,k;
	for(i=2;i<=range;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		for(k=range;k>=i;k--)
		printf("* ");
		printf("\n");
	}
}

void pattern2(int range)
{
	int i,j,k;
	for(i=1;i<=range;i++)
	{
		for(j=range;j>=i;j--)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("* ");
		printf("\n");
	}
}
int main()
{
	int range;
	printf("Enter the range:");
	scanf("%d",&range);
	pattern2(range);
	pattern1(range);
	return 0;
}

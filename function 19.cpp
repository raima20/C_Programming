#include<stdio.h>
void pattern(int range)
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
	pattern(range);
	return 0;
}

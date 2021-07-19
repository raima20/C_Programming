#include<stdio.h>
void pattern(int range)
{
	int i,j,k;
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		for(k=range;k>=i;k--)
		printf("* ");
		printf("\n");
	}
}
int main()
{
	int range;
	printf("Enter rhe range:");
	scanf("%d",&range);
	pattern(range);
	return 0;
}

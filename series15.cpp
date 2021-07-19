#include<stdio.h>
int main()
{
	int i,j,range,k;
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
	return 0;
}

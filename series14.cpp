#include<stdio.h>
int main()
{
	int i,j,range,x;
	printf("Enter the range:");
	scanf("%d",&range);
	x=1;
	for(i=1;i<=range;i++)
	{
		for(j=range;j>=i;j--)
		printf("");
		for(j=1;j<=i;j++)
		printf("%d\t",x++);
		printf("\n");
	}
	return 0;
}

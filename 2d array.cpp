#include<stdio.h>
int main()
{
	int i,j,row,column,a[100][100];
	printf("Enter the row number:");
	scanf("%d",&row);
	printf("Enter the column number:");
	scanf("%d",&column);
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	return 0;
}

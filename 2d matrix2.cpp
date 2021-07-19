#include<stdio.h>
int main()
{
	int i,j,a[100][100],b[100][100],c[100][100],row,column;
	printf("Enter the number of rows:");
	scanf("%d",&row);
	printf("Enter the number of columns:");
	scanf("%d",&column);
	printf("Enter the first matrix:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		printf("a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	printf("Enter the second matrix:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("First matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("Second matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		c[i][j]=a[i][j]+b[i][j];
		
	}
	printf("The sum is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		printf("%d\t",c[i][j]);
		printf("\n");
	}
		
	
	return 0;
	
	
}

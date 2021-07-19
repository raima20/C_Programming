#include<stdio.h>
int main()
{
  int a[100][100],b[100][100],i,j,row,column;
  printf("Enter the rows:");
  scanf("%d",&row);
  printf("Enter the columns:");
  scanf("%d",&column);
  for(i=0;i<row;i++)
  {
  	for(j=0;j<column;j++)
  	{
  	printf("a[%d][%d]",i,j);
  	scanf("%d",&a[i][j]);
  }
}
    printf("Enter first matrix:\n");
    for(i=0;i<row;i++)
    {
    	for(j=0;j<column;j++)
    	{
    		printf("%d\t",a[i][j]);
    		
		}
		printf("\n");
	}
    for(i=0;i<row;i++)
    {
    	for(j=0;j<column;j++)
    	b[j][i]=a[i][j];
	}
	printf("Transpose of the matrix is:\n");
	for(i=0;i<column;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d\t",b[i][j]);
		    
		}
		printf("\n");
	}
	return 0;
}  

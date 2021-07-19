#include<stdio.h>
int main()
{
	int a[100][100],i,j,row,column,t;
	printf("Enter the row:");
	scanf("%d",&row);
	printf("Enter the column:");
	scanf("%d",&column);
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",a[i][j]);
		}
	}
	for(i=0;i<row;i++){
			for(j=0;j<column;j++)
		{
		if(t==a[i][j]){
	
	printf("Element found");
	return 0;
}
    }
}
	printf("Element not found");
	return 0;
}

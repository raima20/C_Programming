#include<stdio.h>
int main()
{
	int j,i,k,range,x;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=range;j>=i;j--)
		printf(" ");
		x=1;
		for(k=1;k<=i;k++)
        printf("%d ",x++);
		printf("\n");
	}
		return 0;
}

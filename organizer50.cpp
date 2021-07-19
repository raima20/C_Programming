#include<stdio.h>
int main()
{
	int i,j,k,x,n;
	printf("Enter the range:");
	scanf("%d",&n);
	x=1;
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<i;j++)
		printf("\t");
		for(k=i;k<=n;k++)
		printf("%d\t",x++);
		printf("\n");
	}
	return 0;
}

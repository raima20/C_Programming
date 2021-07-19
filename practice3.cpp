#include<stdio.h>
int main()
{
	int i,j,range,x,k;
	printf("Enter the range:");
	scanf("%d",&range);
	x=1;
	for(i=0;i<=range;i++)
	{ 
		for(j=i;j<range;j++)
		printf("\t");
		for(k=0;k<=i;k++)
		printf("%d\t",x++);
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int range,i,j,x;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++){
		x=1;
		for(j=range;j>=i;j--)
			printf(" ");
			for(j=1;j<=i;j++)
			printf("%d ",x++);
			printf("\n");
	}
	return 0;
}

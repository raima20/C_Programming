#include<stdio.h>
int main()
{
	int i,j,range;
    printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++)
		printf("A");
		printf("\n");
   }
		return 0;	
}

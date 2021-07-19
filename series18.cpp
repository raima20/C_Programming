#include<stdio.h>
#include<math.h>
int main()
{
	int i,range,x,j,p=1;
	printf("Enter the range:");
	scanf("%d",&range);
    x=pow(range,2);
	p=pow(10,x);
	x++;
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		for(j=range;j>=i;j--)
		{
			printf("%d ",p);
		  p=pow(10,x);
		  x++;	
		}
		printf("\n");
	}
	return 0;
}

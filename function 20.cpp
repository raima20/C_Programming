#include<stdio.h>
#include<math.h>
void pattern(int range)
{
	int i,j,p=1,po=1;
	for(i=1;i<=range;i++)
	{
		for(j=range;j>=i;j--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%d ",p);
			p=pow(10,po)+p;
			po++;
		}
		printf("\n");
	}
}
int main()
{
	int range;
	printf("Enter the range:");
	scanf("%d",&range);
	pattern(range);
	return 0;
}

#include<stdio.h>
void add(int range)
{
	int i,j,x;
	for(i=1;i<=range;i++)
	{
		x=1;
		for(j=range;j>=i;j--)
	   	printf("%d",x++);
	   	printf("\n");
    }
}
int main()
{
	int range,s;
	printf("Enter the range:");
	scanf("%d",&range);
	add(range);
	//printf("%d",s);
	return 0;
}

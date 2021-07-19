#include<stdio.h>
int sum(int start,int c,int end)
{
	if(start>end)
	{
		return 0;
	}
	return start+sum(start+c,c,end);
}
int main()
{
	int z,c,start,end;
	printf("Enter the start number:");
	scanf("%d",&start);
	printf("Enter the common difference:");
	scanf("%d",&c);
	printf("Enter the end number:");
	scanf("%d",&end);
	z=sum(start,c,end);
	printf("%d",z);
	return 0;
}

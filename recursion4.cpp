#include<stdio.h>
int sum(int start,int end)
{
	if(start>end)
	{
		return 0;
	}
	return start+sum(start+2,end);
}
int main()
{
	int z,start,end;
	printf("Enter the start number:");
	scanf("%d",&start);
	printf("Enter the end number:");
	scanf("%d",&end);
	z=sum(start,end);
	
	printf("The sum is:%d",z);
	return 0;
}

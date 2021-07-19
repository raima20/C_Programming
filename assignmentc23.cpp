#include<stdio.h>
int main()
{
	int i,num,max=0,range;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=0;i<range;i++)
	{
		printf("Enter the number:");
		scanf("%d",&num);
		if(max<num)
		max=num;
	}
	printf("The maximum number is:%d",max);
	return 0;
	
}

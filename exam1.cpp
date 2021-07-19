#include<stdio.h>
int main()
{
	int i,j,range,mult=1,sum=0;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		mult=1;
		for(j=1;j<=i;j++)
		mult=mult*j;
		sum=sum+mult;
        
		printf("%d\n",mult);
	}
	printf("The factorial is:%d",sum);
	return 0;
}

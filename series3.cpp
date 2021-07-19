/*1^1+2^2+3^3+...*/
#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0,i,range,p=1;
	printf("Enter the range:");
	scanf("%d",&range);
	
	for(i=1;i<=range;i++)
	{
		p=pow(i,i);
		sum=sum+p;
	}
	printf("The sum is:%d",sum);
	return 0;
}

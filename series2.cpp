/*1^2+2^2+3^2+4^2+..*/
#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0,i,range,p;
	printf("Enter the range:");
	scanf("%d",&range);
	
	for(i=1;i<=range;i++)
	{
		p=pow(i,2);
		sum=sum+p;
	}
	printf("The sum is:%d\n",sum);
	return 0;
}

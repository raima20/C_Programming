#include<stdio.h>
#include<math.h>
int main()
{
	int i,range,x,p,sum=1,a=3;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<range;i++)
	{
	  p=pow(x,a);
	  a=a+3;
	  sum=sum+p;	
	}
	printf("The sum is:%d",sum);
	return 0;
}

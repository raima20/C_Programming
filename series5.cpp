/*1+x+x^3+x^5+x^7....+x^n*/
#include<stdio.h>
#include<math.h>
int main()
{
	int sum=1,i,x,range,p,a=1;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	
	for(i=1;i<range;i++)
	{
		p=pow(x,a);
		a=a+2;
		sum=sum+p;
	}
	printf("The sum is:%d",sum);
	return 0;
	
}

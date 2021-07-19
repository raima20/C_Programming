/*1+X+x^2+x^3+x^4....+x^n*/
#include<stdio.h>
#include<math.h>
int main()
{
	int sum=1,i,range,x,p;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	
	for(i=1;i<range;i++)
	{
		p=pow(x,i);
		sum=sum+p;
	}
	printf("The sum is:%d",sum);
	return 0;
}

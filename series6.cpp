/*1+x+x^2/2+x^3/3.....x^n/n*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,range,x;
	float p, sum=1.0;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	
	for(i=1;i<range;i++)
	{
		p=pow(x,i)/i;
		sum=sum+p;
	}
	printf("The sum is: %f",sum);
	return 0;

}

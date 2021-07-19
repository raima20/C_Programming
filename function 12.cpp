/*1+x+x^2/2+x^3/3.....x^n/n*/
#include<stdio.h>
#include<math.h>
int add(int range, int x)
{
	int sum=1,i,p,a=1;
	for(i=1;i<range;i++)
	{
		p=pow(x,a);
		a=a+2;
		sum=sum+p;
	}
	return sum;
}
int main()
{
	int range,x,s;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	s=add(range,x);
	printf("%d",s);
	return 0;
}

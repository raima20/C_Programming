/*1+X+x^2+x^3+x^4....+x^n*/
#include<stdio.h>
#include<math.h>
int add(int range,int x)
{
	int sum=1,i,p;
	for(i=1;i<range;i++)
	{
		p=pow(x,i);
		sum=sum+p;
	}
	return sum;
}
int main()
{
	int s,range,x;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	s=add(range,x);
	printf("%d",s);
	return 0;
}

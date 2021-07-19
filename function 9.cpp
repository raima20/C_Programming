/*1^2+2^2+3^2+4^2+..*/
#include<stdio.h>
#include<math.h>
int add(int range)
{
	int i,p=1,sum=0;
	for(i=1;i<=range;i++)
	{
		p=pow(i,2);
		sum=sum+p;
	}
	return sum;
}
int main()
{
	int s,range;
	printf("Enter the range:");
	scanf("%d",&range);
	s=add(range);
	printf("%d",s);
	return 0;
}

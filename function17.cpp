#include<stdio.h>
#include<math.h>
int add(int range)
{
	int i,p=9,sum=0;
	for(i=2;i<=5;i++)
	{
		sum=sum+p;
		p=pow(10,i)-1;
		printf("%d+",p);
	}
	return sum;
}
int main()
{
	int range,s;
	s=add(range);
	printf("\b\n%d",s);
	return 0;
}

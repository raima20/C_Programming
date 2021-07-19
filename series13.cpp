#include<stdio.h>
#include<math.h>
int main()
{
	int i,p=9,sum=0;
	printf("%d",p);
	for(i=2;i<=5;i++)
	{
		sum=sum+p;
		p=pow(10,i)-1;
		printf("+%d",p);
	}
	printf("\b\nThe sum is:%d",sum);
	return 0;
}

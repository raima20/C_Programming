#include<stdio.h>
int main()
{
	int i,sum=0,mult=1;
	for(i=1;i<=4;i++)
	{
		//sum=sum+i; 
		sum+=i;
		mult*=i;
		//printf("%d\n",i);
	}
	printf("sum is %d and multiplication is %d",sum,mult);
	return 0;
}

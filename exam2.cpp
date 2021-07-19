#include<stdio.h>
int main()
{
	int i,range;
	float num=2,denum=7,p,sum;
    printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		p=num/denum;
		num=num+3;
		denum=denum+2;
		sum=sum+p;
	}
	printf("The sum is:%.2f",sum);
	return 0;
}

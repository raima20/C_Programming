#include<stdio.h>
#include<math.h>
void armstrong(int x)
{
	int i,temp,count=0,p,sum=0;
	temp=x;
	while(temp>0)
	{
		count++;
		temp=temp/10;
	}
	p=x;
	for(i=1;i<=count;i++)
	{
		temp=p%10;
		p=p/10;
		sum=sum+pow(temp,count);
	}
	if(x==sum)
	printf("It is an armstrong number!");
	else
	printf("It is not an armstrong number:");
}
int main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	armstrong(x);
	return 0;
}

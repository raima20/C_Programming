#include<stdio.h>
#include<math.h>
int main()
{
	int i,temp,p,count=0,x,sum=0;
printf("Enter the number:");
	scanf("%d",&x);
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
	printf("It is not an armstrong number!");
	return 0;
}

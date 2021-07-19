#include<stdio.h>
int main()
{
	int p,x,sum=0;
	printf("Enter the number:");
	scanf("%d",&x);
	int i=0;
	while(x>0)
	{
		p=x%10;
		x=x/10;
		sum=sum+p;
		i++;
	}
	if(i>5)
	printf("The number you entered is more than 5digits!");
	else
	printf("The sum is:%d",sum);
	return 0;
}

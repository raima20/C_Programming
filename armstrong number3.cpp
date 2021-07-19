#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,r,sum=0;
	printf("Enter the number:");
	scanf("%d",&x);
	n=x;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+pow(r,3);
	}
	if(sum==x)
	printf("Armstrong number!");
	else
	printf("Not an armstrong number!");
	return 0;
}

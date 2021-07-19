#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,sum=0;
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<=x/2;i++)
	{
		if(x%i==0)
		sum=sum+i;
	}
	
	if(x==sum)
	printf("It is a perfect number!");
	else
	printf("It is not a perfect number!");
	return 0;
}

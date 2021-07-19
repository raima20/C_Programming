#include<stdio.h>
void perfect(int x)
{
	int i,sum=0;
	for(i=1;i<=x/2;i++)
	{
		if(x%i==0)
		sum=sum+i;
	}
	if(x==sum)
	printf("It is a perfect number!");
	else
	printf("It is not a perfect number!");
}
int main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	perfect(x);
	return 0;
}

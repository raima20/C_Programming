#include<stdio.h>
int main()
{
	int x,i,count=0;
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		count++;
	}
	if(count==2)
	printf("It is a prime number!");
	else
	printf("It is a not prime number!");
	return 0;
}

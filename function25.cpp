#include<stdio.h>
#include<math.h>
void prime(int x)
{
	int i,counter=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		counter++;
	}
	if(counter==2)
	printf("The number is prime!");
	else
	printf("The number is not prime!");
	
}
int main()
{
	int x,p;
	printf("Enter the number:");
	scanf("%d",&x);
	prime(x);
	
	return 0;
}

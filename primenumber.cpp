#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,counter=0;
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		counter++;
	}

	if(counter==2)
	printf("The number is prime!");
	else
	printf("The number is not prime!");
	return 0;
}



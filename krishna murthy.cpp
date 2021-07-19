#include<stdio.h>
int main()
{
	int i,j,mult=1,sum=0,n;
	printf("Enter the number:");
	scanf("%d",&n);
	int temp=n;
	while(n>0){
		i=n%10;
		mult=1;
		for(j=1;j<=i;j++)
		mult=mult*j;
		sum+=mult;
		n/=10;
	}
	if(sum==temp)
	printf("It is a krishna murthy number!");
	else
	printf("Not a krishna murthy number!");
	return 0;
}

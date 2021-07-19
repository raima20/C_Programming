#include<stdio.h>
int main()
{
	int i=0,n,x,sum=0,m;
	printf("Enter the number:");
	scanf("%d",&n);
	n=m;
	while(m>0)
	{
		x=m%10;
		n=m/10;
		sum=sum*10+x;
		i++;
	}
	if(sum==n)
	printf("Palindrome number!");
	else
	printf("Not a Palindrome number!");
	return 0;
}

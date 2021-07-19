#include<stdio.h>
void odd(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		sum=sum+i;
	}
	printf("%d",sum);
}
int main()
{
	int n;
	printf("Enter the range:");
	scanf("%d",&n);
	odd(n);
	return 0;
}

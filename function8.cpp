#include<stdio.h>
int add(int range)
{
	int sum=0,odd=1,i;
	for(i=1;i<=range;i++)
	{
	sum=sum+odd;
	odd=odd+2;
}
	return sum;
}
int main()
{
	int s,range;
	printf("Enter the range:");
	scanf("%d",&range);
	s=add(range);
	printf("%d",s);
	return 0;
}

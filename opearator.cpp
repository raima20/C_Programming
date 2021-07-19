#include<stdio.h>
int main()
{
	int n,odd=1,even=0;
	printf("enter the number");
	scanf("%d",&n);
	(n&1)?printf("odd"):printf("even");
	return 0;
}

#include<stdio.h>
int main()
{
	int a[100],i,n,even=0;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=even;
		even=even+2;
	}
	printf("The even numbers are:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]: %d\n",i,a[i]);
	}
	return 0;
}

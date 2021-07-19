#include<stdio.h>
int main()
{
	int a[100],i,n,odd=1;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   a[i]=odd;
	   odd=odd+2;	
	}
	printf("The odd numbers are:\n");
	for(i=0;i<n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	return 0;
}

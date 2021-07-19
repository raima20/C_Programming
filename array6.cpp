#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],i,n,x;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		a[i]=pow(x,i);
	}
	printf("The numbers are:\n");
	for(i=0;i<n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	return 0;
}

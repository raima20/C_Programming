#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],i,n;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=pow(i+1,i+1);
	}
	printf("The numbers are:\n");
	for(i=0;i<n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	return 0;
}

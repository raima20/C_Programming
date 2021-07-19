#include<stdio.h>
int main()
{
	int a[100], mult=1,i,j,n;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(mult=1,j=1;j<=i;j++)
		mult=mult*j;
	   a[i]=mult;
	   	
	}
	printf("The factorial is:\n");
	for(i=1;i<=n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	return 0;
}

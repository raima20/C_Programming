#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],i,n,p=1;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]= p;
		p = pow(10,i+1)+p;
	}
	printf("The numbers are:\n");
	for(i=0;i<n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	return 0;
}

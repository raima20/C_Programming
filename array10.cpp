#include<stdio.h>
int main()
{
	int i,n,j;
	float a[100],p,mult;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(mult=1,j=1;j<=i;j++)
		{
		
			mult=(mult*j);
		}
	p=i/mult;
	a[i]=p;
	}
	printf("The factorial is:\n");
	for(i=1;i<n;i++)
	printf("a[%d]: %f\n",i,a[i]);
	return 0;
}

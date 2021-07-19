#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,x,j;
	float a[100],p,mult;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(mult=1,j=1;j<=i;j++)
		{
			mult=mult*j;
		}
		p=pow(x,i)/mult;
		a[i]=p;
	}
	printf("The factorial is:\n");
	for(i=0;i<n;i++)
	printf("a[%d]: %.2f\n",i,a[i]);
	return 0;
}

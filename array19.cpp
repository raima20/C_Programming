#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x,mult=1,j;
	float a[100];
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%d",&x);
	x=-x;
	for(i=0;i<n;i++)
	{
		for(mult=1,j=1;j<=i;j++)
		{
			mult=mult*j;
		}
		a[i]=pow(x,i)/mult;
		
	}
    printf("The numbers are:\n");
    for(i=0;i<n;i++)
    printf("a[%d]: %.2f\n",i,a[i]);
    return 0;
	
}

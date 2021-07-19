#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,n,j,mult;
	float a[100],p,x;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%f",&x);
	x=-x;
	while(i<n)
	{
		j=1,mult=1;
		while(j<=i)
		{
			mult=mult*j;
			j++;
		}
		p=pow(x,i)/mult;
		a[i]=p;
		i++;
	}
	printf("The numbers are:\n");
	i=0;
	while(i<n)
	{
		printf("a[%d]: %.2f\n",i,a[i]);
		i++;
	}
	return 0;
}

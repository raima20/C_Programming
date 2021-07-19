#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=0,j,mult=1;
	float a[100],x,p;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%f",&x);
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

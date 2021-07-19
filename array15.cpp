#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x;
	float a[100],p;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		p=(float)pow(x,i+1)/(i+1);
		a[i]=p;
	}
	printf("The number is:\n");
	for(i=0;i<n;i++)
	printf("a[%d]: %.2f\n",i,a[i]);
	return 0;
}

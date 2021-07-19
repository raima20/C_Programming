#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],x,i,n,p;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		p=pow(x,i);
		a[i]=p;
		
	}
	printf("The number is:\n");
	for(i=0;i<n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	return 0;
}

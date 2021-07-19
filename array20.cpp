#include<stdio.h>
int main()
{
	int n,i,a[100],b=1,c=1,p;
	printf("Enter the range:");
	scanf("%d",&n);
	a[0]=b;
	a[1]=c;
	for(i=2;i<n;i++)
	{
		p=b+c;
		b=c;
		c=p;
		a[i]=p;
	}
	
	printf("The numbers are:\n");
	for(i=0;i<n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	return 0;
}

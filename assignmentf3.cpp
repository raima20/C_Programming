#include<stdio.h>
int main()
{
	int a[10],b[10],i,j=0,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	b[j++]=a[i];
	//printf("a[%d]:%d\n",i,a[i]);
	for(i=0;i<n;i++)
	printf("The numbers are:b[%d]:%d\n",i,b[i]);
	return 0;
}

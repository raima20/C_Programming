#include<stdio.h>
int main()
{
	int i,n,a[100],b[100];
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int j=0;
	for(i=n-1;i>=0;i--)
	b[j++]=a[i];
	for(i=0;i<n;i++)
	printf("%d\t
	",b[i]);
	return 0;
}

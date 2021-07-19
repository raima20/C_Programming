#include<stdio.h>
int main()
{
	char a[100];
	int n,i;
	printf("How many elements you want to store in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf(" %c",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}

	return 0;
}

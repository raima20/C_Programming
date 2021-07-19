#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("How many elements you want to store in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("The elements in the array:\n");
	for(i=0;i<n;i++)
{
    printf("a[%d]: %d\n",i,a[i]);
}
    return 0;
}

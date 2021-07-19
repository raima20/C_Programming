#include<stdio.h>
int main()
{
	float a[100];
	int n,i;
	printf("How many elements you want to store in a array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%f",&a[i]);
	}
	printf("The elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]: %f",i,a[i]);
	}
	return 0;
}

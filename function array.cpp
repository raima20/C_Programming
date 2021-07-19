#include<stdio.h>
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	printf("%d\t",a[i]);
}
int main()
{
	int i,n,a[100];
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Elements in the array: ");
	printarray(a,n);
	return 0;
}

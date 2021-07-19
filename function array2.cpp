#include<stdio.h>
void printeven(int a[],int n)
{
	int even=0;
	for(int i=0;i<n;i++)
	{
		a[i]=even;
	   even=even+2;	
	}
}
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
printf("%d\t",a[i]);
}

int main()
{
	int n,a[100],i;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
	}
	printf("The even numbers are:\n");
	printeven(a,n);
	printarray(a,n);
}

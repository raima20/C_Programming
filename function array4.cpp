#include<stdio.h>
#include<math.h>
void printarray(int a[],int n,int x)
{
	int i,p;
	for(i=0;i<n;i++)
	{
		p=pow(x,i);
		a[i]=p;
	}
}
void printsum(int a[], int n)
{ 
 for(int i=0;i<n;i++)
 printf("%d\t",a[i]);
}
int main()
{
	int x,n,a[100];
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%d",&x);
	printf("The sum is:\n");
	printarray(a,n,x);
	printsum(a,n);
}

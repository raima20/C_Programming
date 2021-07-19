#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a[100],p=0;
	printf("Enter the range:");
	scanf("%d",&n);
	a[0]=1;
	for(i=0;i<n;i++)	
	{
		p=pow(10,i)+p;
		a[i]=p;
	}
	printf("The sum is:\n");
	for(i=0;i<n;i++)
	printf("a[%d]:%d\n",i,a[i]);
	return 0;
}

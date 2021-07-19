#include<stdio.h>
int main()
{
	int i,n,a[100],b=0,c=1,d;
	printf("Enter the range:");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++)
	{   
		d=b+c;
		a[i]=d;
	    b=c;
	    c=d;
		
	}
	printf("The numbers are:\n");
	for(i=0;i<n;i++)
	printf("a[%d]:%d\n",i,a[i]);
	return 0;
	
}

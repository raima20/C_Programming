#include<stdio.h>
int main()
{
	int i=0,n,p,m,k=0,j=1,a[k];
	printf("Enter the number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		n=n/10;
		i++;
	}
	for(j=1;j<=i;j++)
	{
		p=m%10;
		m=m/10;
		if(j%2!=0)
		{
		  a[k++]=p;	
		}
	}
	for(j=k-1;j>=0;j--)
	printf("%d",a[j]);

	return 0;
}

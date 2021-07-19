#include<stdio.h>
int main()
{
	int l,u,i,n=0,a[100],j,sum=0;
	printf("Enter the lower number:");
	scanf("%d",&l);
	printf("Enter the upper number:");
	scanf("%d",&u);
	for(i=l;i<=u;i++)
	{
		sum=0;
	  for(j=1;j<=i/2;j++)
	  {
	  	if(i%j==0)
	  	sum=sum+j;
	  }
	  if(sum==i)
	  {
	  	a[n]=i;
	  	n++;
	  }
	  	}
	  	for(i=0;i<n;i++)
	  printf("a[%d]: %d\n",i,a[i]);
	  return 0;

}
